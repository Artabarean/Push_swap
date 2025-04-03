/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:03:42 by alex              #+#    #+#             */
/*   Updated: 2025/04/03 12:50:37 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int stack_pop(t_list *stack)
{
    int i;
    int value;

    i = 0;
    value = stack->array[0];
    if (stack->top < 0)
        return -1;
    while (i < stack->top)
    {
        stack->array[i] = stack->array[i + 1];
        i++;
    }
    stack->array[stack->top] = 0;
    stack->top--;
    return (value);
}