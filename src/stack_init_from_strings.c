/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_from_strings.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:19:18 by alex              #+#    #+#             */
/*   Updated: 2025/04/03 12:47:57 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void stack_init_from_strings(t_list *stack, char **numbers)
{
    int i;

    i = 0;
    while (numbers[i])
        i++;
    while (i >= 0)
    {
        stack_push(stack, ft_atoi(numbers[i]));
        i--;
    }
}
