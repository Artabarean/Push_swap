/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:02:45 by alex              #+#    #+#             */
/*   Updated: 2025/03/24 10:53:35 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_push(t_list *stack, int value)
{
    if (stack->top >= stack->size - 1)
        return (0);
    
    stack->array[++stack->top] = value;
    return (1);
}