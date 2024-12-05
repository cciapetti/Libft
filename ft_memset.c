/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:08:11 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:51:16 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	int		c;
// 	size_t	n;
// 	void	*s;
// 	void	*s1;
// 	char	str[10] = "ottimo";
// 	char	str1[10] = "ottimo";

// 	c = 97;
// 	n = 20;
// 	s = &str[0];
// 	s1 = &str1[0];
// 	printf("mem %s\n", str);
// 	printf("ft_mem %s\n", str1);
// 	memset(s, c, n);
// 	ft_memset(s1, c, n);
// 	printf("mem %s\n", str);
// 	printf("ft_mem %s\n", str1);
// return (0);
// }

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
