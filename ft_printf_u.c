/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:49:39 by username          #+#    #+#             */
/*   Updated: 2026/05/15 18:24:08 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_printf_u(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	return (count + 1);
}
