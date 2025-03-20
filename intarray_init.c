/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:17:47 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/20 11:42:30 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int *intarray_init(int *s, char **argv)
{
	int	i;
	
	i = 0;
	while (argv[i] != '\0')
	{
		s[i] = ft_atoi(argv[i]);
		i++;
	}
	return (s);
}