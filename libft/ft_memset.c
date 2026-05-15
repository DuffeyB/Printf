/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:45:15 by bduffey           #+#    #+#             */
/*   Updated: 2026/04/15 14:09:18 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char ptr[] = "hello";

	printf("ptr before is %s\n", ptr);
	ft_memset(ptr, 'A', 5);
	printf("ptr after is %s\n", ptr);
}
*/
