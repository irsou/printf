#include "ft_printf.h"


void	test_alter(void)
{
	int	n;

	ft_printf("----- ALTER\n");
	n = ft_printf("%#x\n", 0x5A);
	ft_printf("%d\n", n);
	n = ft_printf("%#X\n", 0x5A);
	ft_printf("%d\n", n);
	n = ft_printf("%#x\n", 0);
	ft_printf("%d\n", n);
}

void	test_sign(void)
{
	int	n;

	ft_printf("----- SIGN\n");
	n = ft_printf("%+d\n", 15);
	ft_printf("%d\n", n);
	n = ft_printf("% d\n", 15);
	ft_printf("%d\n", n);
	n = ft_printf("%+d\n", -15);
	ft_printf("%d\n", n);
	n = ft_printf("% d\n", -15);
	ft_printf("%d\n", n);
}

void	test_pad(void)
{
	int	n;

	ft_printf("----- PAD\n");
	n = ft_printf("%5dk\n", 15);
	ft_printf("%d\n", n);
	n = ft_printf("%05dk\n", -15);
	ft_printf("%d\n", n);
	n = ft_printf("%-5sk\n", "PP");
	ft_printf("%d\n", n);
	n = ft_printf("%05xk\n", 0x4F);
	ft_printf("%d\n", n);
	n = ft_printf("%-05dk\n", -50);
	ft_printf("%d\n", n);
}

void	test_prec(void)
{
	int	n;

	ft_printf("----- PREC\n");
	n = ft_printf("%.5d\n", 15);
	ft_printf("%d\n", n);
	n = ft_printf("%.5s\n", "HELLO WORLD");
	ft_printf("%d\n", n);
}

int	main(void)
{

	int	n;

	n = ft_printf("%c\n", ';');
	ft_printf("%d\n", n);
	n = ft_printf("%s\n", "HELLO WORLD");
	ft_printf("%d\n", n);
	n = ft_printf("%i\n", 2147483647);
	ft_printf("%d\n", n);
	n = ft_printf("%d\n", (int)-2147483648);
	ft_printf("%d\n", n);
	n = ft_printf("%u\n", (unsigned int)4294967295);
	ft_printf("%d\n", n);
	n = ft_printf("%x\n", -0xA8);
	ft_printf("%d\n", n);
	n = ft_printf("%X\n", 0x5F);
	ft_printf("%d\n", n);
	n = ft_printf("%p\n", NULL);
	ft_printf("%d\n", n);
	n = ft_printf("%p\n", (void *)0x7ffd764d44b4);
	ft_printf("%d\n", n);
//bonus
	test_alter();
	test_sign();
	test_pad();
	test_prec();
	return (0);


}