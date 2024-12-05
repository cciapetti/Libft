/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:58:33 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/22 19:40:08 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char *nptr = "    \t  -245436";
// 	int	i;

// 	i = atoi(nptr);
// 	printf("%d\n", i);
// 	i = ft_atoi(nptr);
// 	printf("%d\n", i);
// 	return (0);
// }

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign++;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		result = (result * 10) + (nptr[i] - 48);
		i++;
	}
	if (sign == 1)
		return (result * (-1));
	else
		return (result);
}
