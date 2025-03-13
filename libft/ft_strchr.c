/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:16:01 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/29 11:51:04 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0' && s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
// #include <stddef.h>
// #include <stdio.h>
// int main()
// {
//     int c = '\0';
//     const char s[5] = "teste";
//     char *result = ft_strchr(s, c);
//     if (result != NULL) {
//         printf("Found character '%c' at position: %ld\n", c, result - s);
//     } else {
//         printf("Character '%c' not found\n", c);
//     }
//     return (0);
// }