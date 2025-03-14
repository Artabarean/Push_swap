/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:12:33 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/14 11:28:05 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(int *sb)
{
	int	temp;
	int	temp2;
	
	if (!sb || sb[1] == NULL)
		return (write(1, "stack 'b' has one or less integers", 35));
	temp = sb[8];
	temp2 = sb[7];
	sb[8] = sb[9];
	sb[7] = temp;
	temp = sb[6];
	sb[6] = temp2;
	temp2 = sb[5];
	sb[5] = temp;
	temp = sb[4];
	sb[4] = temp2;
	temp2 = sb[3];
	sb[3] = temp;
	temp = sb[2];
	sb[2] = temp2;
	temp2 = sb[1];
	sb[1] = temp;
	temp = sb[0];
	sb[0] = temp2;
	sb[9] = temp;
	write(1, "rrb\n", 4);
}
