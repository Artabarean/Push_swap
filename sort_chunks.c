/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:01:57 by alex              #+#    #+#             */
/*   Updated: 2025/03/28 11:30:04 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	find_largest_position(t_list *stack)
{
	int	largest;
	int	pos;
	int	i;

	largest = stack->array[0];
	pos = 0;
	i = 1;
	while (i <= stack->top)
	{
		if (stack->array[i] > largest)
		{
			largest = stack->array[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	find_next_in_range(t_list *stack, int min_val, int max_val)
{
	int	middle;
	int	offset;
	int	top_pos;
	int	bottom_pos;

	middle = stack->top / 2;
	offset = 0;
	while (offset <= middle)
	{
		top_pos = middle + offset;
		if (top_pos <= stack->top && stack->array[top_pos] >= min_val
			&& stack->array[top_pos] < max_val)
			return (top_pos);
		bottom_pos = middle - offset;
		if (bottom_pos >= 0 && offset > 0 && stack->array[bottom_pos] >= min_val
			&& stack->array[bottom_pos] < max_val)
			return (bottom_pos);
		offset++;
	}
	return (-1);
}

void	find_chunks(t_list *a, t_list *b, l_list *s)
{
	s->c = 0;
	while (s->c < s->ck_count)
	{
		s->ck_min = s->min + (s->c * (s->max - s->min) / s->ck_count);
		s->ck_max = s->min + ((s->c + 1) * (s->max - s->min) / s->ck_count);
		s->elements_in_ck = 0;
		while (s->i <= a->top)
		{
			if (a->array[s->i] >= s->ck_min && a->array[s->i] < s->ck_max)
				s->elements_in_ck++;
			s->i++;
		}
		s->pushed = 0;
		while (s->pushed < s->elements_in_ck)
		{
			s->best_pos = find_next_in_range(a, s->ck_min, s->ck_max);
			if (s->best_pos == -1)
				break ;
			move_to_top(a, s->best_pos, 'a');
			push_to_b(a, b);
			s->pushed++;
		}
		s->c++;
	}
}

void	sort_chunks(t_list *a, t_list *b, l_list *s)
{
	s->len = a->top + 1;
	s->ck_count = 3;
	if (s->len > 100)
		s->ck_count = 5;
	s->ck_size = s->len / s->ck_count;
	find_min_max_median(a, &s->min, &s->max, &s->median);
	s->i = 0;
	find_chunks(a, b, s);
	while (b->top >= 0)
	{
		s->largest_pos = find_largest_position(b);
		move_to_top(b, s->largest_pos, 'b');
		push_to_a(b, a);
	}
}
