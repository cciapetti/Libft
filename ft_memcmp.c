/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:32:46 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/22 17:59:38 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const void *s1 = "abc";
// 	const void *s2 = "0";
// 	size_t	n = 0;

// 	printf("memcmp: %d\n", memcmp(s1, s2, n));
// 	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
// 	return (0);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
