/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:45:59 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/14 11:27:42 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *sa)
{
	int	temp;
	int	temp2;
	
	if (!sa || sa[1] == NULL)
		return (write(1, "stack 'a' has one or less integers", 35));
	temp = sa[1];
	temp2 = sa[2];
	sa[1] = sa[0];
	sa[2] = temp;
	temp = sa[3];
	sa[3] = temp2;
	temp2 = sa[4];
	sa[4] = temp;
	temp = sa[5];
	sa[5] = temp2;
	temp2 = sa[6];
	sa[6] = temp;
	temp = sa[7];
	sa[7] = temp2;
	temp2 = sa[8];
	sa[8] = temp;
	temp = sa[9];
	sa[9] = temp2;
	sa[0] = temp;
	write(1, "ra\n", 3);
}
