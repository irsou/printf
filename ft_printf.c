/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:13:18 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/26 17:33:52 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** Print ARGUMENT(s) according to FORMAT */



int	ft_printf(char const *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, format);
	len = ft_strlen(format);
	while (*format)
	{
		if (format == '%')
		{
			format++;
			if (*format == 'c')
				write(1, &c, 1);
			else if (*format == 's')
				ft_putstr(args);
			else if (*format == 'p')
				//puntero void* en formato hexadecimal
			else if (*format == 'd')
				//decimal, base 10
			else if (*format == 'i')
				//entero base 10
			else if (*format == 'u')
				//decimal base 10 sin signo
			else if (*format == 'x')
				// número hexacecimal base 16 minúsculas
			else if (*format == 'X')
				// número hexacecimal base 16 mayúsculas
			else if (*format == '%')
				//símbolo porcentaje
				write(1, "%", 1);
		}
	}
	va_end(args);
	return (len);
}