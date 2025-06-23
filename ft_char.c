/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdes <uardaozdes@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:35:40 by uozdes            #+#    #+#             */
/*   Updated: 2025/06/23 13:35:40 by uozdes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	if (!s)
		return (ft_putstr("(null)"));
	count = 0;
	i = 0;
	while (s[i])
		count += ft_putchar(s[i++]);
	return (count);
}
