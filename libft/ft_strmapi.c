/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:20 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 13:55:06 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

char	upper(unsigned int i, char c)
{
		(void)i;
		if (c >= 'a' && c <= 'z')
				return (c - 32);
		return (c);
}

int	main(void)
{
		char	test[] = "abcdef";
		char	*result = ft_strmapi(test, upper);

		printf("%s\n", result);
		free(result);
}
*/
