/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaie <mmirzaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:03:40 by mmirzaie          #+#    #+#             */
/*   Updated: 2023/03/24 12:48:05 by mmirzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_id(int num)
{
	int	count;

	count = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (num < 0)
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
