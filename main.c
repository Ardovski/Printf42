#include <stdio.h>
#include <stddef.h>
#include "ft_printf.h"
int main()
{
	printf("arda\n");
	int a = ft_printf("arda");
	int b = ft_printf("%s %d","arda",31);
	ft_printf("%d\n", b);
}