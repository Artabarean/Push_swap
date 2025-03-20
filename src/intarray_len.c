/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 09:34:35 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/20 09:55:00 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	intarray_len(int *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}