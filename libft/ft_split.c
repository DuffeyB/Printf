/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:40:39 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 12:10:53 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

static void	ft_freeall(char **res, size_t j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	len;
	size_t	j;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = ft_wordlen(s, c);
		res[j] = ft_strndup(s, len);
		if (!res[j])
			return (ft_freeall(res, j), NULL);
		j++;
		s += len;
	}
	res[j] = NULL;
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
		char	unsplit[] = "Help+++me+++please";
		char	**split = ft_split(unsplit, '+');
		size_t	i;

		i = 0;
		while (split[i])
		{
			printf("%s\n", split[i]);
			i++;
		}
		free(split);
}
*/
