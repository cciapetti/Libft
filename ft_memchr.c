/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:26:07 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/22 17:28:31 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const void	*s = "ciao mondo!";
// 	int	c = 48;
// 	size_t	n = 100;
// 	const void	*s1 = "ciao mondo!";

// 	s = memchr(s, c, n);
// 	s1 = ft_memchr(s1, c, n);
// 	printf("dopo memchr: %s\n", (char *)s);
// 	printf("dopo ft_memchr: %s\n", (char *)s1);
// 	return (0);
// }

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
