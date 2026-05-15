/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:56:49 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 14:56:42 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
		char	test = 'b';
		char	*s = "dcba";

		printf("s is at %p, where is 'b'? At %p\n", s, ft_memchr(s, test, 4));
}
*/
