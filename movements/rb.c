/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:54:48 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/14 11:28:29 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(int *sb)
{
	int	temp;
	int	temp2;
	
	if (!sb || sb[1] == NULL)
		return (write(1, "stack 'b' has one or less integers", 35));
	temp = sb[1];
	temp2 = sb[2];
	sb[1] = sb[0];
	sb[2] = temp;
	temp = sb[3];
	sb[3] = temp2;
	temp2 = sb[4];
	sb[4] = temp;
	temp = sb[5];
	sb[5] = temp2;
	temp2 = sb[6];
	sb[6] = temp;
	temp = sb[7];
	sb[7] = temp2;
	temp2 = sb[8];
	sb[8] = temp;
	temp = sb[9];
	sb[9] = temp2;
	sb[0] = temp;
	write(1, "rb\n", 3);
}
