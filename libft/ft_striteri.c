/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:06 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/09 14:15:52 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*
#include <stdio.h>

void	upper(unsigned int i, char *c)
{
		(void)i;
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
}

int	main(void)
{
		char	test[] = "beatnik";

		printf("test before is %s\n", test);

		ft_striteri(test, upper);
		printf("test after is %s\n", test);
}
*/
