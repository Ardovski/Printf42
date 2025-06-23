/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdes <uardaozdes@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:36:17 by uozdes            #+#    #+#             */
/*   Updated: 2025/06/23 13:36:17 by uozdes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += ft_putnbr(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_u(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
