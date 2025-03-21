/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:14:54 by alex              #+#    #+#             */
/*   Updated: 2025/03/21 11:16:51 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void tiny_sort(t_list *stack)
{
    if (stack_len(stack) != 3)
        return;
    if (stack->array[0] > stack->array[1] && stack->array[1] < stack->array[2] && stack->array[0] < stack->array[2])
        _sa(stack);
    else if (stack->array[0] > stack->array[1] && stack->array[1] > stack->array[2])
    {
        _sa(stack);
        ra(stack);
    }
    else if (stack->array[0] > stack->array[1] && stack->array[1] < stack->array[2] && stack->array[0] > stack->array[2])
        ra(stack);
    else if (stack->array[0] < stack->array[1] && stack->array[1] > stack->array[2] && stack->array[0] < stack->array[2])
    {
        _sa(stack);
        ra(stack);
    }
    else if (stack->array[0] < stack->array[1] && stack->array[1] > stack->array[2] && stack->array[0] > stack->array[2])
        _sa(stack);
}