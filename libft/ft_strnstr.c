/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:10:44 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 10:06:10 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
		char	*big = "Be my little green friend";
		char	*little = "green";
		char	*test1 = ft_strnstr(big, little, 7);
		char	*test2 = ft_strnstr(big, little, 19);

		printf("Test 1 should be NULL, returns %p\n", test1);
		printf("Test 2 should be %p, returns %p\n", &big[13], test2);
}
*/
