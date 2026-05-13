/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:51:48 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/13 13:07:01 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#	define FT_PRINTF_H

#	include "libft/libft.h"
#	include <stdarg.h>

int	ft_printf(const char *fmt, ...);
int	ft_printf_c(char c);
int	ft_printf_str(char *str);
int	ft_printf_hex(usnigned long nb, char c);
int	ft_printf_dec_int(int nbr);
int	ft_printf_u(unsigned int nbr);
int	ft_printf_ptr(void *ptr);

#endif
