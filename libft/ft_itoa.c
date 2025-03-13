/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:21:55 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/31 15:22:53 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrcnt(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_itoa_int_min(void)
{
	char	*str;

	str = ft_strdup("-2147483648");
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*strl;
	int		len;

	if (n == (int)-2147483648)
		return (ft_itoa_int_min());
	len = ft_nbrcnt(n);
	strl = malloc(sizeof(char) * (len + 1));
	if (!strl)
		return (NULL);
	strl[len] = '\0';
	if (n < 0)
	{
		strl[0] = '-';
		n = -n;
	}
	if (n == 0)
		strl[0] = '0';
	while (n > 0)
	{
		len--;
		strl[len] = (n % 10) + '0';
		n /= 10;
	}
	return (strl);
}
// #include <stdio.h>
// int main()
// {
//   printf("%s\n", ft_itoa(-109239323));
//   return (0);
// }
