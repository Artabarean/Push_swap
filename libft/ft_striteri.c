/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:03:38 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/24 12:46:36 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    (f)(unsigned int index, char *c)
// {
//     if(c[index] >= 'A' && c[index] <= 'Z')
//     {
//       c[index] = c[index] + 32;
//     }
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}
// int main()
// {
//     char  str[] = "HELLO";
//     ft_striteri(str, f);
//     return (0);
// }