/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:58:08 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/19 11:27:19 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	int	i;

// 	i = 55;
// 	printf("%d\n", isdigit(i));
// 	printf("%d\n", ft_isdigit(i));
//	return (0);
// }

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}
