/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:47:02 by isousa-s          #+#    #+#             */
/*   Updated: 2025/01/25 18:30:01 by isousa-s         ###   ########.fr       */
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

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
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
