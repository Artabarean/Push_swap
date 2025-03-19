/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:30:19 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/19 12:57:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	if (1 == argc || (2 == argc && !argv[1][0]))
		return (1);
	else if (2 == argc)
		argv = ft_split(argv[1], ' ');
		stack_init(&sa, argv + 1, 2 == argc);
		if (!stack_sorted(a))
		{
			if (stack_len(a) == 2)
				sa(&a, false);
			else if (stack_len(a) == 3)
				tiny_sort(&a);
			else
				push_swap(&a, &b);
		}
    free_stack(&a);
}