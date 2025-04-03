/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_search.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:11:42 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/03 10:49:05 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	char_search(char **numbers)
{
	int	i;
	int	j;
	
	j = 0;
	i = 0;
	while (numbers[i])
	{
		while(numbers[i][j])
		{
			if (ft_isdigit(numbers[i][j]) == 0)
			{
				if (numbers[i][j] != '-')
					return (1);
				if (numbers[i][j] == '-' && ft_isdigit(numbers[i][j + 1]) == 0)
					return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
