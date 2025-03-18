/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:06:13 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/05 09:28:43 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return (1);
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long ptr)
{
	char	c;

	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
		{
			c = ptr + '0';
			write(1, &c, 1);
		}
		else
		{
			c = ptr - 10 + 'a';
			write(1, &c, 1);
		}
	}
}

int	ft_printpointer(va_list args_copy)
{
	int					length;
	unsigned long long	ptr;

	ptr = (unsigned long long)va_arg(args_copy, void *);
	length = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		length = 5;
	}
	else
	{
		length += write(1, "0x", 2);
		ft_put_ptr(ptr);
		length += ft_ptr_len(ptr);
	}
	return (length);
}
