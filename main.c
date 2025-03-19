/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:30:19 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/19 17:24:29 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	int	*sa;
	int	*sb;
	
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
		stack_init(sa, argv + 1, 2 == argc);
		if (!stack_sorted(sa))
		{
			if (stack_len(sa) == 2)
				_sa(&sa);
			else if (stack_len(sa) == 3)
				tiny_sort(&sa);
			else
				push_swap(&sa, &sb);
		}
    free_stack(&sa);
}