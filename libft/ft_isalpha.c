/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:50 by bduffey           #+#    #+#             */
/*   Updated: 2026/04/15 14:06:05 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>

int	main(void)
{
	int t, f;

	t = 'b';
	f = '9';
	printf("t is true? %i\n", ft_isalpha(t));
	printf("f is false? %i\n", ft_isalpha(f));
}
*/
