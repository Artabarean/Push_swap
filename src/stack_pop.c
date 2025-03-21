/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:03:42 by alex              #+#    #+#             */
/*   Updated: 2025/03/21 11:04:17 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_pop(t_list *stack, int *value)
{
    if (stack->top < 0)
        return (0);
    
    *value = stack->array[stack->top--];
    return (1);
}