/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:49:01 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/14 15:08:19 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	alloc_size;
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	alloc_size = nmemb * size;
	ptr = malloc(alloc_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, alloc_size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
		char	*ptr1;
		char	*ptr2;

		ptr1 = ft_calloc(8, sizeof(int));
		ptr2 = ft_calloc(0, sizeof(char));

		printf("ptr1 is %p\n", ptr1);
		printf("ptr2 is %p\n", ptr2);
		free(ptr1);
		free(ptr2);
}
*/
