/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:45:03 by bduffey           #+#    #+#             */
/*   Updated: 2026/04/15 14:08:37 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>

int	main(void)
{
	int t, f;

	t = '0';
	f = 'f';
	printf("t is true? %i\n", ft_isdigit(t));
	printf("f is false? %i\n", ft_isdigit(f));
}
*/
