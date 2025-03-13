/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:25:17 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 10:25:18 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}
/*#include <stdio.h>
int	main(void)
{
		int     c;

		c = 'Z';
		printf("%d\n", ft_tolower(c));
		printf("%c\n", ft_tolower(c));
		return (0);
}*/