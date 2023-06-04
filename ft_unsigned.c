/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaie <mmirzaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:38:49 by mmirzaie          #+#    #+#             */
/*   Updated: 2023/03/24 12:42:12 by mmirzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		count++;
		num *= -1;
	}
	if (num > 9)
	{
		count += ft_id(num / 10);
	}
	ft_putchar_fd(num % 10 + '0', 1);
	count++;
	return (count);
}
