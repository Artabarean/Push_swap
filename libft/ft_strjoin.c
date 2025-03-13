/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:24:03 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/29 11:40:15 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*memrsv;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	memrsv = malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
	if (memrsv == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		memrsv[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		memrsv[i] = *s2;
		s2++;
		i++;
	}
	memrsv[i] = '\0';
	return (memrsv);
}
// #include <stdio.h>
// int main()
// {
//     printf("%s\n", ft_strjoin("Hola", "adios"));
//     return (0);
// }