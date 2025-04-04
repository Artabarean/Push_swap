/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:02:45 by alex              #+#    #+#             */
/*   Updated: 2025/04/04 13:21:43 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void stack_push(t_list *stack, int value)
{
    int i;

    if (stack->top >= stack->size - 1)
        return;
    i = stack->top;
    while (i >= 0)
    {
        stack->array[i + 1] = stack->array[i];
        i--;
    }
    stack->array[0] = value;
    stack->top++;
}
