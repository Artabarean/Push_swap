/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:04:21 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/14 11:27:21 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *sa)
{
	int	temp;
	int	temp2;
	
	if (!sa || sa[1] == NULL)
		return (write(1, "stack 'a' has one or less integers", 35));
	temp = sa[8];
	temp2 = sa[7];
	sa[8] = sa[9];
	sa[7] = temp;
	temp = sa[6];
	sa[6] = temp2;
	temp2 = sa[5];
	sa[5] = temp;
	temp = sa[4];
	sa[4] = temp2;
	temp2 = sa[3];
	sa[3] = temp;
	temp = sa[2];
	sa[2] = temp2;
	temp2 = sa[1];
	sa[1] = temp;
	temp = sa[0];
	sa[0] = temp2;
	sa[9] = temp;
	write(1, "rra\n", 4);
}
