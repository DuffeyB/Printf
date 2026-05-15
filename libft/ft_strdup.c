/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:48:10 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 15:10:04 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
		char	*s = "testing";
		char	*dup = ft_strdup(s);

		printf("Dup is %s\n", dup);
		free(dup);
}
*/
