/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:26:28 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/25 11:37:11 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void push_swap(t_list *a, t_list *b)
{
    l_list  *auxvar;
    int     len;
    int     initializer;

    initializer = 0;
    len = a->top + 1;
    auxvar = struct_init(initializer);
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
        sort_chunks(a, b, auxvar);
}
