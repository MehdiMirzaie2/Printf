/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaie <mmirzaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:00 by ajordan-          #+#    #+#             */
/*   Updated: 2023/03/24 12:40:16 by mmirzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

void	ft_putchar_fd(char c, int fd);
int		ft_char(int c);
int		ft_str(char *str);
int		ft_ptr(uintptr_t ptr);
int		ft_hex(unsigned int num, const char format);
int		ft_id(int num);
int		ft_unsigned(unsigned int num);
int		ft_printf(const char *str, ...);

#endif
