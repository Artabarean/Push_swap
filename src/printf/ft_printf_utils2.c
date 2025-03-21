/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:31:25 by alex              #+#    #+#             */
/*   Updated: 2025/03/05 09:31:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunint(va_list args_copy)
{
	int				count;
	unsigned int	unint;
	char			c;

	count = 0;
	unint = (unsigned int)va_arg(args_copy, unsigned int);
	if (unint < 10)
	{
		c = unint + '0';
		write(1, &c, 1);
		return (1);
	}
	count = ft_putunint_recursive(unint / 10);
	c = (unint % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_putunint_recursive(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count = ft_putunint_recursive(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(va_list args_copy, char format)
{
	unsigned int	num;

	num = va_arg(args_copy, unsigned int);
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
