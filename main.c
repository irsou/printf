/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:22:50 by isousa-s          #+#    #+#             */
/*   Updated: 2025/01/25 18:23:20 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	return (0);
}
