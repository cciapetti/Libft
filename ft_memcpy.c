/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:42:40 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 12:50:46 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	void		*dest;
// 	const void	*src;	
// 	void		*dest1;
// 	const void	*src1;

// 	size_t		n;
// 	char		str[15] = {0};
// 	char		str1[15] = {0};
// 	char		str2[15] = {0};
// 	char		str3[15] = {0};

// 	src = &str[0];
// 	dest = &str2[0];
// 	src1 = &str1[0];
// 	dest1 = &str3[0];
// 	n = 15;
// 	printf("prima di memcpy: %s\n", str2);
// 	printf("prima di ft_memcpy: %s\n", str3);
//     memcpy(((void*)0), ((void*)0), 3);
//     ft_memcpy(((void*)0), ((void*)0), 3);
// 	printf("dopo memcpy: %s\n", str2);
// 	printf("dopo ft_memcpy: %s\n", str3);
// 	return (0);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = (unsigned char *)dest;
	ptr1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	src = (void *)ptr1;
	dest = (void *)ptr;
	return (dest);
}
