/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:01:19 by alex              #+#    #+#             */
/*   Updated: 2025/03/14 11:28:10 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	_sb(int *sb)
{
	int	temp;

	if (!sb || sb[1] == NULL)
		return (write(1, "stack 'b' has one or less integers", 35));
	temp = sb[0];
	sb[0] = sb[1];
	sb[1] = temp;
	write(1, "sb\n", 3);
}
