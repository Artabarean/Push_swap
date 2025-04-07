/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:43:26 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/07 11:35:43 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_args(long *nums, int top)
{
	int	i;
	
	i = 0;
	while (i <= top)
	{
		if (nums[i] > INT_MAX || nums[i] < INT_MIN)
		{
			printf("e");
			return (1);
		}
		i++;
	}
	return (0);
}
