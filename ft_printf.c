/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:14:52 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/15 10:44:37 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_find_type(const char *format, va_list args)
{
	int	position;

	position = 0;
	if (*format == 'c')
		position += ft_printf_c(va_arg(args, int));
	else if (*format == 's')
		position += ft_printf_str(va_args(args, char *));
	else if (*format == 'p')
		position += ft_printf_ptr(va_args(args, void *));
	else if (*format == 'd' || *format == 'i')
		position += ft_printf_dec_int(va_args(args, int));
	else if (*format == 'u')
		position += ft_printf_u(va_args(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
		position += ft_printf_hex(va_args(args, unsigned int));
	else if (*format == '%')
		position += ft_printf_c('%');
	return (position);
}


int	ft_printf(const char *format, ...)
{
	size_t	count;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			count += find_type(++format, args);
		}
		else
			count += ft_printf_c(*format);
		if (*format)
			format++;
	}
	va_end(args);
	return (count);
}
