/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_from_strings.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:19:18 by alex              #+#    #+#             */
/*   Updated: 2025/04/01 13:03:30 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void stack_init_from_strings(t_list *stack, char **strings)
{
    int i;
    int value;

    value = 0;
    i = 0;
    while (strings[i])
    {
        value = atoi(strings[i]);
        stack_push(stack, value);
        i++;
    }
}
