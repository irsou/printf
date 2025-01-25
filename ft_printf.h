/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:22:27 by isousa-s          #+#    #+#             */
/*   Updated: 2025/01/25 18:26:22 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_hex(unsigned int n);
void	ft_putnbr_hex_upper(unsigned int n);
void	ft_putptr(void *ptr);

#endif