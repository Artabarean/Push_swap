/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:01:57 by alex              #+#    #+#             */
/*   Updated: 2025/04/08 12:54:51 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	calculate_chunk_count(int size)
{
	if (size <= 100)
	{
		if (size <= 20)
			return (2);
		else if (size <= 50)
			return (3);
		else
			return (6);
	}
	else
	{
		if (size <= 200)
			return (11);
		else
			return (13);
	}
}

int	has_value_in_range(t_list *stack, int min_val, int max_val)
{
	int	i;

	i = 0;
	while (i <= stack->top)
	{
		if (stack->array[i] >= min_val && stack->array[i] < max_val)
			return (1);
		i++;
	}
	return (0);
}

int	opt_pos_in_rng(t_list *stk, int mn_v, int mx_v, t_lst *aux)
{
	int	cost;
	int	size;

	aux->best_cost = 2147483647;
	size = stk->top + 1;
	aux->best_pos = -1;
	aux->i = 0;
	while (aux->i <= stk->top)
	{
		if (stk->array[aux->i] >= mn_v && stk->array[aux->i] < mx_v)
		{
			if (aux->i > size / 2)
				cost = size - aux->i;
			else
				cost = aux->i;
			if (cost < aux->best_cost)
			{
				aux->best_cost = cost;
				aux->best_pos = aux->i;
			}
		}
		aux->i++;
	}
	return (aux->best_pos);
}

void	initialize_chunk(t_list *a, t_lst *aux)
{
	int	stack_size;

	stack_size = a->top + 1;
	aux->ck_size = stack_size;
	find_min_max_median(a, &aux->min, &aux->max, &aux->median);
	aux->ck_ct = calculate_chunk_count(aux->ck_size);
	aux->c = 0;
}

void	process_chunk_elements_optimized(t_list *a, t_list *b, t_lst *aux)
{
	int	has_value;
	int	size_a;

	determine_chunk_boundaries(aux);
	has_value = has_value_in_range(a, aux->ck_min, aux->ck_max);
	size_a = a->top + 1;
	if (size_a <= 5 && !has_value_in_range(a, aux->ck_min, aux->max))
	{
		optimize_small_groups(a, b);
		return ;
	}
	while (has_value)
	{
		process_single_element(a, b, aux);
		has_value = has_value_in_range(a, aux->ck_min, aux->ck_max);
	}
}
