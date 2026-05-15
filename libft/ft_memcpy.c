/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:07:28 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 15:04:41 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = "stop";
	char d[] = "pots";

	printf("Source is %s\n", s);
	printf("Dest before is %s\n", d);
	ft_memcpy(d, s, 4);
	printf("Dest after is %s\n", d);
}
*/
