/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:02 by bduffey           #+#    #+#             */
/*   Updated: 2026/04/20 13:44:01 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + len);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[6] = "happy";
	char	dst[8] = "un";

	printf("Before cat, source is %s and dest is %s\n", src, dst);
	ft_strlcat(dst, src, 8);
	printf("After cat, dest is %s", dst);
}
*/
