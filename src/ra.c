/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:45:59 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/21 11:16:59 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list *stack)
{
    int top_value;
    int i;

    i = 0;
    if (stack->top < 1)
        return;
    i = stack->top;
    top_value = stack->array[stack->top];
    while (i > 0)
    {
        stack->array[i] = stack->array[i - 1];
        i--;
    }   
    
    stack->array[0] = top_value;
}
