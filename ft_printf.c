/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:14:52 by username          #+#    #+#             */
/*   Updated: 2026/05/15 18:20:15 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_find_type(const char *symbol, va_list args)
{
	int	position;

	position = 0;
	if (*symbol == 'c')
		position += ft_printf_c(va_arg(args, int));
	else if (*symbol == 's')
		position += ft_printf_str(va_arg(args, char *));
	else if (*symbol == 'p')
		position += ft_printf_ptr(va_arg(args, void *));
	else if (*symbol == 'd' || *symbol == 'i')
		position += ft_printf_dec_int(va_arg(args, int));
	else if (*symbol == 'u')
		position += ft_printf_u(va_arg(args, unsigned int));
	else if (*symbol == 'x' || *symbol == 'X')
		position += ft_printf_hex(va_arg(args, unsigned int), *symbol);
	else if (*symbol == '%')
		position += ft_printf_c('%');
	else
		return (-1);
	return (position);
}

int	ft_printf(const char *symbol, ...)
{
	size_t	count;
	int		printed;
	va_list	args;

	if (!symbol)
		return (-1);
	va_start(args, symbol);
	count = 0;
	while (*symbol)
	{
		if (*symbol == '%')
		{
			printed = ft_find_type(++symbol, args);
			if (printed == -1)
				return (va_end(args), -1);
			count += printed;
		}
		else
			count += ft_printf_c(*symbol);
		if (*symbol)
			symbol++;
	}
	va_end(args);
	return (count);
}
