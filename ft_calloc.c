/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:03:55 by cciapett          #+#    #+#             */
/*   Updated: 2024/12/03 16:28:13 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	size_t	nmemb = 5;
// 	size_t	size = 8539;
// 	void	*ptr;
// 	void	*ptr1;

// 	ptr = calloc(size, sizeof(int));
// 	ptr1 = ft_calloc(size, sizeof(int));
// 	printf("calloc: %s\n", (char *)ptr);
// 	printf("ft_calloc: %s\n", (char *)ptr1);
// 	free(ptr);
// 	free(ptr1);
// 	return (0);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
