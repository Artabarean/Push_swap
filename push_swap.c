/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:26:28 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/24 12:09:27 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void push_swap(t_list *a, t_list *b)
{
    int len;
    len = a->top + 1;

    if (len <= 1)
        return;
    else if (len == 2)
    {
        if (a->array[a->top] > a->array[a->top - 1])
            swap(a);
        return;
    }
    else if (len == 3)
    {
        sort_three(a);
        return;
    }
    if (len <= 5)
        sort_small(a, b);
    else
        sort_chunks(a, b);
}

void sort_three(t_list *a)
{
    int top;
    int middle;
    int bottom;
    
    top = a->array[a->top];
    middle = a->array[a->top - 1];
    bottom = a->array[a->top - 2];
    
    if (top > middle && middle < bottom && top < bottom)
        swap(a);
    else if (top > middle && middle > bottom)
    {
        swap(a);
        reverse_rotate(a);
    }
    else if (top > middle && middle < bottom && top > bottom)
        rotate(a);
    else if (top < middle && middle > bottom && top < bottom)
    {
        swap(a);
        rotate(a);
    }
    else if (top < middle && middle > bottom && top > bottom)
        reverse_rotate(a);
}

void sort_small(t_list *a, t_list *b)
{
    int len;
    int i;
    int smallest_pos;
    
    len = a->top + 1;
    i = 0;
    while (i < len - 3)
    {
        smallest_pos = find_smallest_position(a);
        move_to_top(a, smallest_pos);
        push_to(a, b);
        i++;
    }
    sort_three(a);
    while (b->top >= 0)
        push_to(b, a);
}

int find_smallest_position(t_list *stack)
{
    int smallest;
    int pos;
    int i;
    
    smallest = stack->array[0];
    pos = 0;
    i = 1;
    
    while (i <= stack->top)
    {
        if (stack->array[i] < smallest)
        {
            smallest = stack->array[i];
            pos = i;
        }
        i++;
    }
    
    return (pos);
}

void move_to_top(t_list *stack, int pos)
{
    int len;
    
    len = stack->top + 1;
    
    if (pos == stack->top)
        return;
    if (pos > len / 2)
    {
        while (pos != stack->top)
        {
            rotate(stack);
            pos = (pos + 1) % len;
        }
    }
    else
    {
        while (pos != stack->top)
        {
            reverse_rotate(stack);
            pos = (pos - 1 + len) % len;
        }
    }
}

void sort_chunks(t_list *a, t_list *b, l_list *s)
{    
    s->len = a->top + 1;
    s->chunk_count = 3;
    if (s->len > 100)
        s->chunk_count = 5;
    s->chunk_size = s->len / s->chunk_count;
    find_min_max_median(a, s->min, s->max, s->median);
    s->c = 0;
    while (s->c < s->chunk_count)
    {
        s->chunk_min = s->min + (s->c * (s->max - s->min) / s->chunk_count);
        s->chunk_max = s->min + ((s->c + 1) * (s->max - s->min) / s->chunk_count);
        s->elements_in_chunk = 0;
        s->i = 0;
        while (s->i <= a->top)
        {
            if (a->array[s->i] >= s->chunk_min && a->array[s->i] < s->chunk_max)
                s->elements_in_chunk++;
            s->i++;
        }
        s->pushed = 0;
        while (s->pushed < s->elements_in_chunk)
        {
            s->best_pos = find_next_in_range(a, s->chunk_min, s->chunk_max);
            if (s->best_pos == -1)
                break;
            move_to_top(a, s->best_pos);
            push_to(a, b);
            s->pushed++;
        }
        s->c++;
    }
    while (b->top >= 0)
    {
        s->largest_pos = find_largest_position(b);
        move_to_top(b, s->largest_pos);
        push_to(b, a);
    }
}

void find_min_max_median(t_list *stack, int *min, int *max, int *median)
{
    int i;
    
    *min = stack->array[0];
    *max = stack->array[0];
    i = 1;
    
    while (i <= stack->top)
    {
        if (stack->array[i] < *min)
            *min = stack->array[i];
        if (stack->array[i] > *max)
            *max = stack->array[i];
        i++;
    }
    *median = (*min + *max) / 2;
}

int find_largest_position(t_list *stack)
{
    int largest;
    int pos;
    int i;
    
    largest = stack->array[0];
    pos = 0;
    i = 1;
    
    while (i <= stack->top)
    {
        if (stack->array[i] > largest)
        {
            largest = stack->array[i];
            pos = i;
        }
        i++;
    }
    return (pos);
}

int find_next_in_range(t_list *stack, int min_val, int max_val)
{
    int middle;
    int offset;
    int top_pos;
    int bottom_pos;
    
    middle = stack->top / 2;
    offset = 0;
    while (offset <= middle)
    {
        top_pos = middle + offset;
        if (top_pos <= stack->top && 
            stack->array[top_pos] >= min_val && 
            stack->array[top_pos] < max_val)
            return top_pos; 
        bottom_pos = middle - offset;
        if (bottom_pos >= 0 && offset > 0 &&
            stack->array[bottom_pos] >= min_val && 
            stack->array[bottom_pos] < max_val)
            return bottom_pos;
        offset++;
    }
    
    return (-1);
}
