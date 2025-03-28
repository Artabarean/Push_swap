/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:20:41 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/28 10:29:39 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(t_list *stack)
{
    int temp;

    temp = 0;
    if (stack->top < 1)
        return;
    temp = stack->array[stack->top];
    stack->array[stack->top] = stack->array[stack->top - 1];
    stack->array[stack->top - 1] = temp;
    write(1, "sa\n", 3);
}
