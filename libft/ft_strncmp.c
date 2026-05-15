/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:25:51 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 09:33:04 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>

int	main(void)
{
		char	*test1a = "abc";
		char	*test1b = "abc";
		char	*test2a = "abc";
		char	*test2b = "acb";
		int		test1res;
		int		test2res;

		test1res = ft_strncmp(test1a, test1b, 3);
		test2res = ft_strncmp(test2a, test2b, 3);

		printf("Test 1 should return 0, it returns %d\n", test1res);
		printf("Test 2 should return -1, it returns %d\n", test2res);
}
*/
