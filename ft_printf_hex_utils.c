/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:28:24 by isousa-s          #+#    #+#             */
/*   Updated: 2025/01/25 18:28:24 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	unsigned long long	address;
	char				*hex_str;
	char				buffer[16];
	int					pos;

	address = (unsigned long long)ptr;
	hex_str = "0123456789abcdef";
	pos = 0;
	ft_putstr("0x");
	if (address == 0)
		ft_putchar('0');
	else
	{
		while (address)
		{
			buffer[pos++] = hex_str[address % 16];
			address = address / 16;
		}
		while (pos--)
			ft_putchar(buffer[pos]);
	}
}
