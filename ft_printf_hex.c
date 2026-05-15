/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf_hex.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/14 14:49:12 by username         #+#    #+#              */
/*   Updated: 2026/05/15 18:06:26 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned long nb, int fd, char add)
{
	char			c;
	int				len;
	unsigned int	digit;

	len = 0;
	if (nb >= 16)
		len += ft_put_hex(nb / 16, fd, add);
	digit = nb % 16;
	if (digit > 9)
		c = (digit - 10) + add;
	else
		c = digit + '0';
	ft_putchar_fd(c, fd);
	return (len + 1);
}

int	ft_printf_hex(unsigned long nb, char symbol)
{
	char	add;
	int		count;

	if (symbol == 'X')
		add = 'A';
	else
		add = 'a';
	count = ft_put_hex(nb, 1, add);
	return (count);
}
