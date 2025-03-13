/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:03:32 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/29 11:18:01 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		cr;

	if (n == 0)
		return (NULL);
	p = (const unsigned char *)s;
	cr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == cr)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
//   const char str[] = "11p111p";

//     printf("%p\n", ft_memchr(str, 'p', 2));
//     return (0);
// }