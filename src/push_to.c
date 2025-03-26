/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:19:50 by alex              #+#    #+#             */
/*   Updated: 2025/03/26 10:28:42 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_a(t_list *src, t_list *dst)
{
    int value;
    
    if (stack_is_empty(src))
        return;
    
    if (stack_pop(src, &value))
        stack_push(dst, value);
    write(1, "pa\n", 3);
}

void push_to_b(t_list *src, t_list *dst)
{
    int value;
    
    if (stack_is_empty(src))
        return;
    
    if (stack_pop(src, &value))
        stack_push(dst, value);
    write(1, "pb\n", 3);
}
