/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_median.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:00:42 by alex              #+#    #+#             */
/*   Updated: 2025/04/04 12:01:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_min_max_median(t_list *stack, int *min, int *max, int *median)
{
	int	i;

	*min = stack->array[0];
	*max = stack->array[0];
	i = 1;
	while (i <= stack->top)
	{
		if (stack->array[i] < *min)
			*min = stack->array[i];
		if (stack->array[i] > *max)
			*max = stack->array[i];
		i++;
	}
	*median = (*min + *max) / 2;
}

int find_min_value(t_list *stack)
{
    int min = stack->array[0];
    int i;
	
	i = 1;
    while (i <= stack->top)
    {
        if (stack->array[i] < min)
            min = stack->array[i];
        i++;
    }
    return (min);
}
