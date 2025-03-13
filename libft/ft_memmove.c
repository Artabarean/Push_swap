/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:13:55 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 09:31:17 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	ptrdst = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (src < dest)
	{
		ptrdst = ptrdst + (n - 1);
		ptrsrc = ptrsrc + (n - 1);
		while (n > 0)
		{
			*ptrdst-- = *ptrsrc--;
			n--;
		}
	}
	else if (dest < src)
	{
		while (n > 0)
		{
			*ptrdst++ = *ptrsrc++;
			n--;
		}
	}
	return (dest);
}
// #include <stdio.h>
// #include <stddef.h>
// int    main(void)
// {
//   char dst[] = "Holaaaaa";
//   char src[] = "Holaa";
//   printf("%p\n", ft_memmove(dst, src, sizeof(dst)));
//   printf("%s\n", dst);
//   return (0);
// }