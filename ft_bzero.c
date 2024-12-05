/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:31:17 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 12:36:14 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	void	*s;
// 	void	*s1;
// 	size_t	n = 10;
// 	char	str[100] = "oggi e il primo giorno di 42!";
// 	char	str1[100] = "oggi e il primo giorno di 42!";

// 	s = &str[0];
// 	s1 = &str1[0];

// 	bzero(s, n);
// 	ft_bzero(s1, n);
// 	printf("bzero: %s\n", str);
// 	printf("ft_bzero: %s\n", str1);
//	return (0);
// }

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	s = (void *)ptr;
}
