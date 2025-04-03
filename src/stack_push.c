/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:02:45 by alex              #+#    #+#             */
/*   Updated: 2025/04/03 12:43:13 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void stack_push(t_list *stack, int value)
{
    int i;
    
    i = stack->top;
    if (stack->top >= stack->size - 1)
        return;
    while (i >= 0)
    {
        stack->array[i + 1] = stack->array[i];
        i--;
    }
    stack->array[0] = value;
    stack->top++;
}