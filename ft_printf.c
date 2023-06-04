/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaie <mmirzaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:38:58 by mmirzaie          #+#    #+#             */
/*   Updated: 2023/03/24 12:40:57 by mmirzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_ptr(va_arg(args, size_t)));
	else if (format == 'd' || format == 'i')
		return (ft_id(va_arg(args, int)));
	else if (format == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_hex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_char('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	args;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			length += ft_char(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
