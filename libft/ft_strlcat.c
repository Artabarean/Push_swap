/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:24:10 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 10:24:10 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	while (i < size - 1 && *src)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	*dest;
// 	memset(dest, 'r', 15);
//     printf("%li\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
//     write(1, "\n", 1);
//     write(1, dest, 15);
// }