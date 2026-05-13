/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:14:52 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/13 16:22:29 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	counter;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
		{
			counter += find_type(++format, args);
		}
		else
			counter += ft_printf_c(*format);
		if (*format)
			format++;
	}
	va_end(args);
	return (counter);
}
