/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:26:54 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/10 09:19:14 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_handler(char format, va_list args_copy)
{
	if (format == 'c')
		return (ft_printchar(format, args_copy));
	else if (format == 's')
		return (ft_putstring(args_copy));
	else if (format == 'p')
		return (ft_printpointer(args_copy));
	else if (format == 'd' || format == 'i')
		return (ft_printnbr(args_copy));
	else if (format == 'u')
		return (ft_putunint(args_copy));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(args_copy, format));
	else if (format == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		count;

	va_start(args, s);
	count = 0;
	while (*s != '\0')
	{
		if (*s == '%' && *(s + 1) == '\0')
			return (-1);
		if (*s != '%')
		{
			write(1, s, 1);
			count++;
		}
		else
		{
			s++;
			if (*s != '\0')
				count += format_handler(*s, args);
		}
		s++;
	}
	va_end(args);
	return (count);
}
