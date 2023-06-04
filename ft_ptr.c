/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaie <mmirzaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:58:56 by mmirzaie          #+#    #+#             */
/*   Updated: 2023/03/24 11:55:35 by mmirzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_ptr_len(uintptr_t num)
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

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_ptr(uintptr_t ptr)
{
	int	ptr_len;

	ptr_len = 0;
	ptr_len += write(1, "0x", 2);
	if (ptr == 0)
		ptr_len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		ptr_len += ft_get_ptr_len(ptr);
	}
	return (ptr_len);
}
