/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:40:04 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/26 10:47:18 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list *stack)
{
	int	i;
	int	j;
	int	bottom_value;

	j = 0;
	i = 0;
	if (stack->top < 1)
		return ;
	i = stack->top;
	bottom_value = stack->array[0];
	while (j > i)
	{
		stack->array[j] = stack->array[j + 1];
		j++;
	}
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list *stack)
{
	int	i;
	int	j;
	int	bottom_value;

	j = 0;
	i = 0;
	if (stack->top < 1)
		return ;
	i = stack->top;
	bottom_value = stack->array[0];
	while (j > i)
	{
		stack->array[j] = stack->array[j + 1];
		j++;
	}
	write(1, "rrb\n", 4);
}

void	reverse_rotate(t_list *stack)
{
	int	i;
	int	j;
	int	bottom_value;

	j = 0;
	i = 0;
	if (stack->top < 1)
		return ;
	i = stack->top;
	bottom_value = stack->array[0];
	while (j > i)
	{
		stack->array[j] = stack->array[j + 1];
		j++;
	}
	write(1, "rr", 2);
}
