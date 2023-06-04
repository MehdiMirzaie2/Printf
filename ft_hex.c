/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaie <mmirzaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:16:38 by mmirzaie          #+#    #+#             */
/*   Updated: 2023/03/24 11:28:53 by mmirzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// #include "ft_printf.h"
// it is minus 10 because values 9 < num < 16 are translated to alphats 
*/

#include "ft_printf.h"

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (ft_char('0'));
	else if (num >= 16)
	{
		ft_hex(num / 16, format);
		ft_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + 48), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			else if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
	return (ft_hex_len(num));
}
