/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:01:57 by alex              #+#    #+#             */
/*   Updated: 2025/04/02 12:42:52 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int calculate_chunk_count(int size)
{
    if (size <= 100)
        return (5);
    else
        return (11);
}

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
    int i = 1;
    while (i <= stack->top)
    {
        if (stack->array[i] < min)
            min = stack->array[i];
        i++;
    }
    return (min);
}

int find_opt_pos_in_rng(t_list *stack, int min_val, int max_val)
{
    int best_pos = -1;
    int best_cost = 2147483647;
    int i, cost;
    int size = stack->top + 1;
    
    i = 0;
    while (i <= stack->top)
    {
        if (stack->array[i] >= min_val && stack->array[i] < max_val)
        {
            if (i > size / 2)
                cost = size - i;
            else
                cost = i;
                
            if (cost < best_cost)
            {
                best_cost = cost;
                best_pos = i;
            }
        }
        i++;
    }
    return best_pos;
}

void sort_large(t_list *a, t_list *b, l_list *aux)
{
    aux->ck_size = a->top + 1;
	int	chunk_count;
    int c;
    
    find_min_max_median(a, &aux->min, &aux->max, &aux->median);
    chunk_count = calculate_chunk_count(aux->ck_size);
    c = 0;
    while (c < chunk_count)
    {
        aux->ck_min = aux->min + (c * (aux->max - aux->min) / chunk_count);
        aux->ck_max = aux->min + ((c + 1) * (aux->max - aux->min) / chunk_count);
        while (1)
        {
            aux->best_pos = find_opt_pos_in_rng(a, aux->ck_min, aux->ck_max);
            if (aux->best_pos == -1)
                break;
            move_to_bot(a, aux->best_pos, 'a');
            push_to_b(a, b);
        }
        c++;
    }
    while (b->top >= 0)
    {
        aux->best_pos = find_smallest_position(b);
        move_to_bot(b, aux->best_pos, 'b');
        push_to_a(b, a);
	}
	rotate_a(a);
}
