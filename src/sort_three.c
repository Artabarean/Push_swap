/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:14:54 by alex              #+#    #+#             */
/*   Updated: 2025/03/31 09:49:39 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_three(t_list *a)
{
    int top;
    int middle;
    int bottom;
    
    top = a->array[a->top];
    middle = a->array[a->top - 1];
    bottom = a->array[a->top - 2];
    if (top > middle && middle < bottom && top < bottom)
        swap(a);
    else if (top > middle && middle > bottom)
    {
        swap(a);
        reverse_rotate_a(a);
    }
    else if (top > middle && middle < bottom && top > bottom)
        rotate_a(a);
    else if (top < middle && middle > bottom && top < bottom)
    {
        swap(a);
        rotate_a(a);
    }
    else if (top < middle && middle > bottom && top > bottom)
        reverse_rotate_a(a);
}