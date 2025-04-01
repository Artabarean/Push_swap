/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:14:54 by alex              #+#    #+#             */
/*   Updated: 2025/04/01 11:41:38 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_three(t_list *a)
{
    int mid;
    int bot;
    int top;

    top = a->array[a->top];
    mid = a->array[a->top - 1];
    bot = a->array[a->top - 2];
    if (top > mid && mid < bot && top < bot)
    {
        swap_a(a);
        reverse_rotate_a(a);
        swap_a(a);
    }
    else if (top > mid && mid < bot && top > bot)
        swap_a(a);
    else if (top < mid && mid > bot && top < bot)
    {
        reverse_rotate_a(a);
    }
    else if (top < mid && mid > bot && top > bot)
    {
        reverse_rotate_a(a);
        swap_a(a);
    }
}
