/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:14:54 by alex              #+#    #+#             */
/*   Updated: 2025/03/24 11:03:17 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void tiny_sort(t_list *sa)
{
    if (stack_len(sa) != 3)
        return;
    if (sa->array[0] > sa->array[1] && sa->array[1] < sa->array[2]
        && sa->array[0] < sa->array[2])
        swap(sa);
    else if (sa->array[0] > sa->array[1] && sa->array[1] > sa->array[2])
    {
        swap(sa);
        rotate(sa);
    }
    else if (sa->array[0] > sa->array[1] && sa->array[1] < sa->array[2]
        && sa->array[0] > sa->array[2])
        rotate(sa);
    else if (sa->array[0] < sa->array[1] && sa->array[1] > sa->array[2]
        && sa->array[0] < sa->array[2])
    {
        swap(sa);
        rotate(sa);
    }
    else if (sa->array[0] < sa->array[1] && sa->array[1] > sa->array[2]
        && sa->array[0] > sa->array[2])
        swap(sa);
}
