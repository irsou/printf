/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:47:02 by isousa-s          #+#    #+#             */
/*   Updated: 2025/01/25 13:23:23 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
    if (s)
        write(1, s, ft_strlen(s));
}

size_t	ft_strlen(const char *str)
{
	size_t		pos;

	pos = 0;
	while (str[pos] != '\0')
		pos ++;
	return (pos);
}


// putchar   putnbr   putnbr_unsigend

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar("-");
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_putnbr_unsigned(unsigned int n)
{
	if (n > 9)
		ft_putnbr_unsigned(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_putnbr_hex(unsigned int n)
{
	char	*hex_str;

	hex_str = "0123456789abcdef";
	if (n > 15)
		ft_putnbr_hex(n / 16);
	ft_putchar(hex_str[n % 16]);
}

void	ft_putnbr_hex_upper(unsigned int n)
{
	char	*hex_str;

	hex_str = "0123456789ABCDEF";
	if (n > 15)
		ft_putnbr_hex_upper(n / 16);
	ft_putchar(hex_str[n % 16]);
}

void	ft_putptr(void *ptr)
{
	unsigned long long address;
	char	*hex_str;
	char	buffer[16];
	int		pos;

	address = (unsigned long long)ptr;
	hex_str = "0123456789abcdef";
	pos = 0;
	ft_putstr("0x");
	if (address = 0)
		ft_putchar('0');
	else
	{
		while (address)
		{
			buffer[pos++] = hex_str[address %16];
			address = address / 16;
		}
		while (pos--)
			ft_putchar(buffer[pos]);
	}
}