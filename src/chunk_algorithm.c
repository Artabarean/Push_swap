/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:59:10 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/08 13:09:12 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	determine_chunk_boundaries(t_lst *aux)
{
	int	chunk_count;
	int	min_val;
	int	max_val;
	int	c_val;

	chunk_count = aux->ck_ct;
	min_val = aux->min;
	max_val = aux->max;
	c_val = aux->c;
	aux->ck_min = min_val + (c_val * (max_val - min_val) / chunk_count);
	aux->ck_max = min_val + ((c_val + 1) * (max_val - min_val) / chunk_count);
}

void	process_single_element(t_list *a, t_list *b, t_lst *aux)
{
	aux->best_pos = opt_pos_in_rng(a, aux->ck_min, aux->ck_max, aux);
	if (aux->best_pos == -1)
		return ;
	aux->size_a = a->top + 1;
	aux->stack_indx = 0;
	if (aux->best_pos != 0)
	{
		if (aux->best_pos <= (aux->size_a / 2))
		{
			while (aux->stack_indx < aux->best_pos)
			{
				rotate_a(a);
				aux->stack_indx++;
			}
		}
		else
		{
			while (aux->stack_indx < (aux->size_a - aux->best_pos))
			{
				reverse_rotate_a(a);
				aux->stack_indx++;
			}
		}
	}
	push_to_b(a, b);
}

void	push_elements_back_to_a(t_list *a, t_list *b, t_lst *aux)
{
	int	stack_b_not_empty;
	int	best_pos;

	stack_b_not_empty = (b->top >= 0);
	while (stack_b_not_empty)
	{
		best_pos = find_largest_position(b);
		aux->best_pos = best_pos;
		if (best_pos != 0)
		{
			move_to_bot(b, best_pos, 'b');
		}
		push_to_a(b, a);
		stack_b_not_empty = (b->top >= 0);
	}
}

void	finalize_sort(t_list *a, t_lst *aux)
{
	int	min_pos;

	min_pos = find_smallest_position(a);
	aux->min_pos = min_pos;
	if (min_pos != 0)
		move_to_bot(a, min_pos, 'a');
}

void	sort_large(t_list *a, t_list *b, t_lst *aux)
{
	int	chunk_continue ;
	int	chunk_count;
	int	c_val;
	int	stack_size;

	stack_size = a->top + 1;
	initialize_chunk(a, aux);
	chunk_count = aux->ck_ct;
	c_val = aux->c;
	chunk_continue = (c_val < chunk_count);
	while (chunk_continue)
	{
		process_chunk_elements_optimized(a, b, aux);
		c_val = aux->c;
		aux->c = c_val + 1;
		chunk_count = aux->ck_ct;
		chunk_continue = (c_val < chunk_count);
	}
	push_elements_back_to_a(a, b, aux);
	finalize_sort(a, aux);
}
