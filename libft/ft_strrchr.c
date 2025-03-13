/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:12:08 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/24 15:50:23 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	s1 = (char *)s;
	while (i >= 0)
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
//     int c = 'o';
//     const char s[8] = "saco\0ooo";
//     char *result = ft_strrchr(s, c);
//     if (result != NULL) {
//         printf("Found character '%c' at position: %ld\n", c, result - s);
//     } else {
//         printf("Character '%c' not found\n", c);
//     }
//     return (0);
// }