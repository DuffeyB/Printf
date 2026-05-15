/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:07:58 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/14 14:55:09 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*ptr++ = 0;
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[] = "wackadoodle";
	int		i = 0;

	printf("test before is %s\n", test);
	ft_bzero(test, 5);
	while (i < 11)
	{
		printf("test position %i after is %c\n", i, test[i]);
		i++;
	}
}
*/
