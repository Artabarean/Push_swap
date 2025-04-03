/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_search.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:11:42 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/03 14:48:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	char_search(char **num)
{
	int	i;
	int	j;
	
	j = 0;
	i = 0;
	while (num[i])
	{
		while(num[i][j])
		{
			if (ft_isdigit(num[i][j]) == 0)
			{
				if (num[i][j] != '-')
					return (1);
				if ((num[i][j] == '-' && ft_isdigit(num[i][j + 1]) == 0))
					return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
