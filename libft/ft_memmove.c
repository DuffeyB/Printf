/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:47:00 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 14:56:53 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "abcdef";

	printf("string before is %s\n", s);
	ft_memmove(s + 2, s, 4);
	printf("string after mome with d > s is %s\n, should be ababcd", s);
	ft_memmove(s, s + 2, 4);
	printf("string after move with d < s is %s\n, should be abcdcd", s);
}
*/
