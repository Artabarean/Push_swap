/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:22:41 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/31 12:15:31 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	s = ptr;
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	s[10] = "holapepito";

	printf("%s\n", s);
	ft_memset(s, 65, 4);
	printf("%s\n", s);
	return (0);
}*/
