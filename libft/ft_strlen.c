/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:02:06 by bduffey           #+#    #+#             */
/*   Updated: 2026/04/15 14:11:08 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *s1 = "Hello!";
	const char *s2 = "Goodbye!";
	printf("s1 is 6 letters? Yes it's %zu letters\n", ft_strlen(s1));
	printf("s2 is 8 letters? Yes it's %zu letters\n", ft_strlen(s2));
}
*/
