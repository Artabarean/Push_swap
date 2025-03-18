/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:33:29 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/05 10:23:43 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_printchar(char format, va_list args_copy);
int		ft_putstring(va_list args_copy);
int		ft_printnbr(va_list args_copy);
void	ft_putnbr(int n, int *len);
int		ft_ptr_len(unsigned long long ptr);
void	ft_put_ptr(unsigned long long ptr);
int		ft_printpointer(va_list args_copy);
int		ft_putunint(va_list args_copy);
int		ft_putunint_recursive(unsigned int n);
int		ft_print_hex(va_list args_copy, char format);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned int num);
void	ft_putchar_fd(char c, int fd);

#endif