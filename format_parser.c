/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdes <uardaozdes@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:08:15 by uozdes            #+#    #+#             */
/*   Updated: 2025/06/23 16:08:15 by uozdes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_format(t_format *f)
{
	f->flag_minus = 0;
	f->flag_zero = 0;
	f->flag_plus = 0;
	f->flag_space = 0;
	f->flag_hash = 0;
	f->width = 0;
	f->precision = 0;
	f->precision_specified = 0;
	f->conversion = 0;
}

int	parse_format(const char *format, int i, t_format *f, va_list args)
{
	init_format(f);
	while (format[i] == '-' || format[i] == '0' || format[i] == '+' ||
		format[i] == ' ' || format[i] == '#')
	{
		if (format[i] == '-')
			f->flag_minus = 1;
		else if (format[i] == '0')
			f->flag_zero = 1;
		else if (format[i] == '+')
			f->flag_plus = 1;
		else if (format[i] == ' ')
			f->flag_space = 1;
		else if (format[i] == '#')
			f->flag_hash = 1;
		i++;
	}
	while (format[i] >= '0' && format[i] <= '9')
		f->width = f->width * 10 + (format[i++] - '0');
	if (format[i] == '.')
	{
		f->precision_specified = 1;
		i++;
		while (format[i] >= '0' && format[i] <= '9')
			f->precision = f->precision * 10 + (format[i++] - '0');
	}
	f->conversion = format[i];
	return (i);
}
