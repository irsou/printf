/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:22:50 by isousa-s          #+#    #+#             */
/*   Updated: 2025/01/26 11:38:28 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int n;

    // Prueba de caracteres
    n = ft_printf("Character: %c\n", 'A');
    ft_printf("Return value: %d\n", n);
    n = printf("Character: %c\n", 'A');
    printf("Return value: %d\n", n);
    // Prueba de cadenas
    n = ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Return value: %d\n", n);
	n = printf("String: %s\n", "Hello, World!");
    printf("Return value: %d\n", n);
    // Prueba de punteros
    int x = 42;
    n = ft_printf("Pointer: %p\n", &x);
    ft_printf("Return value: %d\n", n);
	n = printf("Pointer: %p\n", &x);
    printf("Return value: %d\n", n);
    // Prueba de enteros decimales
    n = ft_printf("Decimal: %d\n", 12345);
    ft_printf("Return value: %d\n", n);
	n = printf("Decimal: %d\n", 12345);
    printf("Return value: %d\n", n);
    // Prueba de enteros decimales con signo
    n = ft_printf("Integer: %i\n", -12345);
    ft_printf("Return value: %d\n", n);
	n =printf("Integer: %i\n", -12345);
    printf("Return value: %d\n", n);
    // Prueba de enteros sin signo
    n = ft_printf("Unsigned: %u\n", 4294967295U);
    ft_printf("Return value: %d\n", n);
	n = printf("Unsigned: %u\n", 4294967295U);
    printf("Return value: %d\n", n);
    // Prueba de enteros hexadecimales en minúsculas
    n = ft_printf("Hexadecimal (lowercase): %x\n", 0xabcdef);
    ft_printf("Return value: %d\n", n);
	n = printf("Hexadecimal (lowercase): %x\n", 0xabcdef);
    printf("Return value: %d\n", n);
    // Prueba de enteros hexadecimales en mayúsculas
    n = ft_printf("Hexadecimal (uppercase): %X\n", 0xABCDEF);
    ft_printf("Return value: %d\n", n);
	n = printf("Hexadecimal (uppercase): %X\n", 0xABCDEF);
    printf("Return value: %d\n", n);
    // Prueba del símbolo de porcentaje
    n = ft_printf("Percent sign: %%\n");
    ft_printf("Return value: %d\n", n);
	n = printf("Percent sign: %%\n");
    printf("Return value: %d\n", n);
    return (0);
}
