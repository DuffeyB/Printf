/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:55:08 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 14:41:26 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (!dst || size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "destin";
	char src[] = "source";

	printf("Before change, source is %s, and dest is %s\n", src, dest);
	ft_strlcpy(dest, src, 7);
	printf("After change, source is %s, and dest is %s\n", src, dest);
}
*/
