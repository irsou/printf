/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:47:02 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/26 17:49:21 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t		pos;

	pos = 0;
	while (str[pos] != '\0')
		pos ++;
	return (pos);
}

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

char	*ft_hexptr(unsigned long long num, const char *digits)
{
	char			*result;
	int			len;
	int			base;
	unsigned long long	temp;

	if (!digits || ft_strlen(digits) == 0)
		return (NULL);
	if (num == 0)
		return (ft_strdup("0"));
	base = ft_strlen(digits);
	temp = num;
	len = 0;
	while (temp > 0 && ++len)
		temp /= base;
	result = (char *)ft_calloc_pf(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (num > 0)
	{
		result[--len] = digits[num % base];
		num /= base;
	}
	return (result);
}
int	ft_putptr(void *ptr)
{
	int		len;
	char	*hex_str;

	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	hex_str = ft_hexptr((unsigned long long)ptr, "0123456789abcdef");
	if (!hex_str)
		return (-1);
	len = write(1, hex_str, ft_strlen(hex_str)) + 2;
	free (hex_str);
	return (len);
}