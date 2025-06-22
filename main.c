/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdes <uardaozdes@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 21:02:44 by uozdes            #+#    #+#             */
/*   Updated: 2025/06/22 21:02:44 by uozdes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // sadece test için, kendi ft_printf ile kıyas yapacağız

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int	ft_puthex(unsigned int n, int uppercase);
int	ft_putptr(unsigned long ptr);

int main()
{
	int a = ft_printf("Hello %s! Char: %c, Percent: %%\n", "Arda", 'A');
	int b = printf("Hello %s! Char: %c, Percent: %%\n", "Arda", 'A');

	ft_printf("ft_printf yazdirdi	: %d karakter\n", a);
	printf("printf yazdirdi	: %d karakter\n", b);

	ft_printf("Pozitif sayı: %d\n", 12345);
ft_printf("Negatif sayı: %d\n", -54321);
ft_printf("Sıfır: %i\n", 0);
ft_printf("INT_MIN: %d\n", -2147483648);

ft_printf("Unsigned pozitif: %u\n", 123);
ft_printf("Unsigned 0: %u\n", 0);
ft_printf("Unsigned taşma (-1): %u\n", -1);  // Beklenen: 4294967295

int count;
    // Küçük harflerle hex yazdırır (örneğin 254 -> "fe")
    count = ft_puthex(254, 0);
    ft_putchar('\n');

    // Büyük harflerle hex yazdırır (örneğin 254 -> "FE")
    count = ft_puthex(254, 1);
    ft_putchar('\n');

	ft_putptr(12);
    ft_putchar('\n');
}