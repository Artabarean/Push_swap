/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:17:47 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/03 12:45:57 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list  *stack_init(int size)
{
    int i;
    
    i = 0;
    t_list *stack = (t_list *)malloc(sizeof(t_list));
    if (!stack)
        return (NULL);
    stack->array = (int *)malloc(sizeof(int) * size);
    if (!stack->array)
    {
        free(stack);
        return (NULL);
    }
    stack->size = size;
    stack->top = -1;
    while (i < size)
    {
        stack->array[i] = 0;
        i++;
    }
    return (stack);
}
