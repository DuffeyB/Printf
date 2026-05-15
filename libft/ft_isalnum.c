/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:50:58 by bduffey           #+#    #+#             */
/*   Updated: 2026/04/15 14:05:22 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>

int main(void)
{
	int t1, t2, f;

	t1 = 'a';
	t2 = '9';
	f = '@';
	printf("t1 is true? %i\n", ft_isdigit(t1));
	printf("t2 is true? %i\n", ft_isdigit(t2));
	printf("f is false? %i\n", ft_isdigit(f));
}
*/
