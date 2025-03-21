/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:26:28 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/21 11:21:06 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void push_swap(t_list *a, t_list *b)
{
    // Implement your push_swap algorithm
    // This is just a placeholder
    while (!stack_is_sorted(a))
    {
        // Example operations
        if (a->array[a->top] > a->array[a->top - 1])
            swap(a);
        else
        {
            push_to(a, b);
            rotate(a);
            push_to(b, a);
        }
        static int max_iterations = 100;
        if (--max_iterations <= 0)
            break;
    }
}
