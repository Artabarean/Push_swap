/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:20:41 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/14 11:27:50 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	_sa(int *sa)
{
	int	temp;

	if (!sa || sa[1] == NULL)
		return (write(1, "stack 'a' has one or less integers", 35));
	temp = sa[0];
	sa[0] = sa[1];
	sa[1] = temp;
	write(1, "sa\n", 3);
}
