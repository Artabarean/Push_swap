/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:16:54 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/05 09:26:55 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char format, va_list args_copy)
{
	char	c;

	if (format == 'c')
	{
		c = (char)va_arg(args_copy, int);
		write(1, &c, 1);
		return (1);
	}
	return (0);
}

int	ft_putstring(va_list args_copy)
{
	char	*str;
	int		len;

	str = va_arg(args_copy, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

int	ft_printnbr(va_list args_copy)
{
	int	n;
	int	len;

	n = va_arg(args_copy, int);
	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		ft_putnbr(n, &len);
	}
	return (len);
}

void	ft_putnbr(int n, int *len)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		(*len)++;
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, len);
	c = n % 10 + '0';
	write(1, &c, 1);
	(*len)++;
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
