/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:35:19 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/20 18:07:30 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = isalpha(97);
// 	j = ft_isalpha(97);
// 	printf("%d\n", i);
// 	printf("%d\n", j);
// 	return (0);
// }

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}
