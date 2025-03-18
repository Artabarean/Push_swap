/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:25:01 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/28 15:04:16 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0')
				break ;
		}
		else
		{
			k++;
			i++;
			j = 0;
		}
	}
	return (k);
}

static size_t	ft_ending(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(s1);
	while (i < len && set[j] != '\0')
	{
		if (s1[len - i - 1] != set[j])
		{
			j++;
			if (set[j] == '\0')
				break ;
		}
		else
		{
			i++;
			k++;
			j = 0;
		}
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_ending(s1, set);
	len = ft_strlen(s1) - (start + end);
	if (ft_strlen(s1) < start + end)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>

// int main()
// {
//     printf("%s\n", ft_strtrim("Goodbye", "ye"));
//     return (0);
// }