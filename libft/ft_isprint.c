/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:56:55 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/14 14:59:37 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>

int	main(void)
{
	int	t, f;

	t = '9';
	f = '\b';
	printf("t is true? %i\n", ft_isprint(t));
	printf("f is false? %i\n", ft_isprint(f));
}
*/
