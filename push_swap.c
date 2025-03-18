/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:26:28 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/18 11:31:05 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void print_stack(int *stack, const char *name) {
    ft_printf("%s: ", name);
    int i = 0;
    if (stack) {
        while (stack[i] != '\0') {
            printf("%d ", stack[i]);
            i++;
        }
    }
    ft_printf("\n");
}

int *init_stack(int size, int start_val)
{
	int	i;
	int *stack;
	
	i = 0; 
	stack = malloc((size + 1) * sizeof(int));
    if (!stack) {
        ft_printf("Memory allocation failed\n");
        exit(1);
    }
    while (i < size)
	{
		i++;
        stack[i] = start_val + i;
    }
    stack[size] = '\0';    
    return stack;
}
