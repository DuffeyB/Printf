/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:51:40 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 09:55:05 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n--)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a = "abcde";
	char	*b = "abcce";
	int		test1;
	int		test2;

	test1 = ft_memcmp(a, b, 3);
	test2 = ft_memcmp(a, b, 5);

	printf("This test should return 0, it returns %d\n", test1);
	printf("This test should return 1, it returns %d\n", test2);
}
*/
