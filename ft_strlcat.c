/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:23:16 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:52:28 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[100] = "ciao";
// 	char	dst1[100] = "ciao";
// 	const char	src[100] = " mondo!";
// 	size_t	size = 8;

// 	printf("destinazione prima di ft_strlcat: %s\n", dst);
// 	printf("destinazione prima di strlcat: %s\n", dst1);
// 	ft_strlcat(dst, src, size);
// 	strlcat(dst1, src, size);
// 	printf("destinazione dopo ft_strlcat: %s\n", dst);
// 	printf("destinazione dopo strlcat: %s\n", dst1);
// 	printf( "%lu\n", ft_strlcat(dst, src, size));
// 	printf( "%lu\n", strlcat(dst1, src, size));
// 	return (0);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[j] != '\0' && dst_len + j < (size - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}
