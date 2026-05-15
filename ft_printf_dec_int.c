/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf_dec_int.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/14 14:48:58 by username         #+#    #+#              */
/*   Updated: 2026/05/15 18:06:12 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_pnbr(int n, int fd)
{
	long	num;
	int		count;
	char	c;

	count = 0;
	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		count = 1;
		num *= -1;
	}
	if (num >= 10)
		count += ft_printf_pnbr(num / 10, fd);
	c = (num % 10) + '0';
	ft_putchar_fd(c, fd);
	return (count + 1);
}

int	ft_printf_dec_int(int n)
{
	int	count;

	count = ft_printf_pnbr(n, 1);
	return (count);
}
