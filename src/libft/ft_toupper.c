/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:25:27 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 10:25:29 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}
/*#include <stdio.h>
int	main(void)
{
	int	c;

	c = 'a';
	printf("%d\n", ft_toupper(c));
	printf("%c\n", ft_toupper(c));
	return (0);
}*/