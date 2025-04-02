/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:26:28 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/02 12:24:27 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_small(t_list *a, t_list *b)
{
    int i;
    int len;
    int smallest_pos;
    
    len = a->top + 1;
    i = 0;
    while (i < 2)
    {
        smallest_pos = find_smallest_position(a);
        move_to_bot(a, smallest_pos, 'a');
        push_to_b(a, b);
        i++;
    }
    sort_three(a);
    while (b->top >= 0)
        push_to_a(b, a);
    reverse_rotate_a(a);
    reverse_rotate_a(a);
    swap_a(a);
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

int	find_largest_position(t_list *stack)
{
	int	largest;
	int	pos;
	int	i;

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

void move_to_bot(t_list *stack, int pos, char name)
{
    int len;
    int target_value;
    
    len = stack->top + 1;
    if (pos == stack->top)
        return;
    target_value = stack->array[pos];
    if (pos > len / 2)
    {
        while (stack->array[stack->top] != target_value)
            reverse_rotate(stack, name);
    }
    else
    {
        while (stack->array[stack->top] != target_value)
            rotate(stack, name);
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
        if (stack_is_sorted(a) == 0)
            return;
    }
    else
    {
        sort_large(a, b, auxvar);
        if (stack_is_sorted(a) == 0)
            return;
    }
}
