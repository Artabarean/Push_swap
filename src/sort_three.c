/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:14:54 by alex              #+#    #+#             */
/*   Updated: 2025/03/31 13:25:53 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_three(t_list *a)
{
    int mid;
    int bot;
    
    a->array[a->top];
    mid = a->array[a->top - 1];
    bot = a->array[a->top - 2];
    if (a->array[a->top] > mid && mid < bot && a->array[a->top] < bot)
        swap(a);
    else if (a->array[a->top] > mid && mid > bot)
    {
        swap(a);
        reverse_rotate_a(a);
    }
    else if (a->array[a->top] > mid && mid < bot && a->array[a->top] > bot)
        rotate_a(a);
    else if (a->array[a->top] < mid && mid > bot && a->array[a->top] < bot)
    {
        swap(a);
        rotate_a(a);
    }
    else if (a->array[a->top] < mid && mid > bot && a->array[a->top] > bot)
    {
        swap(a);
        reverse_rotate_a(a);
    }
}
