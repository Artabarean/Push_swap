/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:23:47 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 10:23:49 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	int		i;

	i = 0;
	clone = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (clone == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		clone[i] = *s;
		s++;
		i++;
	}
	clone[i] = '\0';
	return (clone);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strdup("Hola"));
	return (0);
}*/