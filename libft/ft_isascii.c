/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:21:32 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 10:21:32 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int main()
// {
// 	int i = 128;
// 	while(i <= 138)
//     {
// 		printf("%d\n", ft_isascii(i));
// 		i++;
// 	}
//     return (0);
// }