/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:26:28 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/31 13:04:23 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_small(t_list *a, t_list *b)
{
    int     len;
    int     i;
    int     smallest_pos;
    
    len = a->top + 1;
    i = 0;
    while (i < len - 3)
    {
        smallest_pos = find_smallest_position(a);
        move_to_top(a, smallest_pos, 'a');
        if (stack_is_sorted(a) == 0)
            return;
        push_to_b(a, b);
        i++;
    }
    sort_three(a);
    while (b->top >= 0)
        push_to_a(b, a);
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

void move_to_top(t_list *stack, int pos, char name)
{
    int len;
    
    len = stack->top + 1;
    
    if (pos == stack->top)
        return;
    if (pos > len / 2)
    {
        while (pos != stack->top)
        {
            rotate(stack, name);
            pos = (pos + 1) % len;
        }
    }
    else
    {
        while (pos != stack->top)
        {
            reverse_rotate(stack, name);
            pos = (pos - 1 + len) % len;
        }
    }
}

void organizer(t_list *a, t_list *b)
{
    l_list  *auxvar;
    int     len;
    int     initializer;

    initializer = 0;
    len = a->top + 1;
    auxvar = struct_init(initializer);
    if (len <= 5)
    {  
        sort_small(a, b);
        if (stack_is_sorted(a))
            return;
    }
    else
    {
        sort_chunks(a, b, auxvar);
        if (stack_is_sorted(a))
            return;
    }
}
