/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:00:40 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/20 10:06:20 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	intarray_sorted(int	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < s[i + 1])
			i++;
		else if (s[i] == '\0')
			return (0);
		else if (s[i] > s[i + 1])
			return (1);
	}
}