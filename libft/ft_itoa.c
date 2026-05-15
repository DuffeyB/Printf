/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:19:58 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 14:04:15 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numlen(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*makestring(size_t len)
{
	char	*result;

	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*result;
	int		sign;

	num = n;
	sign = (num < 0);
	if (num < 0)
		num = -num;
	len = numlen(num) + sign;
	result = makestring(len);
	if (!result)
		return (NULL);
	while (len--)
	{
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign)
		result[0] = '-';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
		char	*test1 = ft_itoa(-666);
		char	*test2 = ft_itoa(123642823);

		printf("Test 1: %s\nTest 2: %s\n", test1, test2);
		free(test1);
		free(test2);
}
*/
