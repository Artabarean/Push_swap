/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:14:54 by alex              #+#    #+#             */
/*   Updated: 2025/03/26 10:34:06 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void tiny_sort(t_list *a)
{
    if (stack_len(a) != 3)
        return;
    if (a->array[0] > a->array[1] && a->array[1] < a->array[2]
        && a->array[0] < a->array[2])
        swap(a);
    else if (a->array[0] > a->array[1] && a->array[1] > a->array[2])
    {
        swap(a);
        rotate_a(a);
    }
    else if (a->array[0] > a->array[1] && a->array[1] < a->array[2]
        && a->array[0] > a->array[2])
        rotate_a(a);
    else if (a->array[0] < a->array[1] && a->array[1] > a->array[2]
        && a->array[0] < a->array[2])
    {
        swap(a);
        rotate_a(a);
    }
    else if (a->array[0] < a->array[1] && a->array[1] > a->array[2]
        && a->array[0] > a->array[2])
        swap(a);
}
