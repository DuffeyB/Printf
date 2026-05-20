/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:06:46 by username          #+#    #+#             */
/*   Updated: 2026/05/15 18:38:31 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

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

int	ft_printf_ptr(void *ptr)
{
	int				count;
	unsigned long	nb;

	if (!ptr)
		return (ft_putstr("(nil)"));
	nb = (unsigned long) ptr;
	count = 0;
	ft_putstr_fd("0x", 1);
	count = 2;
	count += ft_put_hex(nb, 1, 'a');
	return (count);
}
