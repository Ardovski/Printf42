/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdes <uardaozdes@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 20:05:16 by uozdes            #+#    #+#             */
/*   Updated: 2025/06/23 14:16:19 by uozdes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format_parse(const char *format, va_list args, int i)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format[i] == '%')
		count += ft_putchar('%');
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format[i] == 'u')
		count += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format[i] == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 0);
	else if (format[i] == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 1);
	else if (format[i] == 'p')
		count += ft_putptr(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format_parse(format, args, i);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
