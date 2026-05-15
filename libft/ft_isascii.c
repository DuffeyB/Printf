/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:52:58 by bduffey           #+#    #+#             */
/*   Updated: 2026/04/20 11:19:52 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int	main(void)
{
	int t, f;

	t = '@';
	f = 130;
	printf("t is true? %i\n", ft_isascii(t));
	printf("f is false? %i\n", ft_isascii(f));
}
*/
