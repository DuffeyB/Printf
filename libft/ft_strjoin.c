/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:16:09 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 10:49:38 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	count;
	size_t	pos;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	count = 0;
	pos = 0;
	while (s1[count])
		new[pos++] = s1[count++];
	count = 0;
	while (s2[count])
		new[pos++] = s2[count++];
	new[pos] = '\0';
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
		char	*s1 = "Help ";
		char	*s2 = "me please";
		char	*result = ft_strjoin(s1, s2);
		printf("%s\n", result);
		free(result);
}
*/
