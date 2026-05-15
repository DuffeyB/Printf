/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:52:14 by bduffey           #+#    #+#             */
/*   Updated: 2026/05/14 15:11:15 by bduffey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	total;
	int	sign;

	total = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign *= -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		total = (total * 10) + (*nptr++ - '0');
	}
	return (total * sign);
}
/*
#include <stdio.h>

int	main(void)
{
		char	*test1 = "72583";
		char	*test2 = "-23242";
		char	*test3 = "2147483650";
		char	*test4 = "-2147483650";

		int		res1 = ft_atoi(test1);
		int		res2 = ft_atoi(test2);
		int		res3 = ft_atoi(test3);
		int		res4 = ft_atoi(test4);

		printf("Results are:\n%d\n%d\n%d\n%d\n", res1, res2, res3, res4);
}
*/
