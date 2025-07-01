/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:35:08 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/07/01 16:51:50 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	main(void)
{
	char *str = "abi";
	write(1, "\n##########[Ft_printf()]##########\n", 36);
	printf("\n%d\n", ft_printf(" %d",12));
	printf("\n%d\n", ft_printf(" %c",'a'));
	printf("\n%d\n", ft_printf(" %x",12));
	printf("\n%d\n", ft_printf(" %s","aaaaa"));
	printf("\n%d\n", ft_printf("Merhabaalar %s %s %d,","aaaaa", "bbbb",12 ));
	printf("\n%d\n", ft_printf("Merhabaalar %s %s %k,","aaaaa", "bbbb" ));
	printf("\n%d\n", ft_printf("Merhabaalar %s %k %s ,","aaaaa", "bbbb" ));
	printf("\n%d\n", ft_printf("MERHABALAR %k"));

	write(1, "\n###########[printf()]############\n", 36);
	printf("\n%d\n", printf(" %d",12));
	printf("\n%d\n", printf(" %c",'a'));
	printf("\n%d\n", printf(" %x",12));
	printf("\n%d\n", printf(" %s","aaaaa"));
	printf("\n%d\n", printf("Merhabaalar %s %s %d,","aaaaa", "bbbb",12 ));
	printf("\n%d\n", printf("Merhabaalar %s %s %k,","aaaaa", "bbbb" ));
	printf("\n%d\n", printf("Merhabaalar %s %k %s ,","aaaaa", "bbbb" ));
	return (0);
}

