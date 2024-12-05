/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:24:14 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:52:35 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[10] = "canecibo";
// 	char	src[10] = "gatto";
// 	size_t	size;
// 	size_t	i;

// 	size = 10;
// 	printf("prima di ft_strlcpy: %s\n", dst);
// 	i = ft_strlcpy(dst, src, size);
// 	printf("dopo ft_strlcpy: %s\n", dst);
// 	printf("%zu\n", i);
// 	return (0);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
