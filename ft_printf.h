/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdes <uardaozdes@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 20:04:06 by uozdes            #+#    #+#             */
/*   Updated: 2025/06/23 16:04:34 by uozdes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_puthex(unsigned long n, int uppercase);
int	ft_putptr(void *ptr);

typedef struct s_format
{
	int flag_minus;
	int flag_zero;
	int flag_plus;
	int flag_space;
	int flag_hash;
	int width;
	int precision;
	int precision_specified;
	char conversion;
} t_format;

#endif
