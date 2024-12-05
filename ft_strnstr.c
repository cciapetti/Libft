/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:00:06 by cciapett          #+#    #+#             */
/*   Updated: 2024/12/03 17:50:16 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <bsd/string.h>

// int	main(void)
// {
// 	const char *big = "casale";
// 	const char *little = NULL;
// 	size_t	len = 2;
// 	//char	*ptr;
// 	char	*ptr2;

// 	//ptr = ft_strnstr(big, little, len);
// 	ptr2 = strnstr(big, little, len);
// 	//printf("mio: %s\n", ptr);
// 	printf("original: %s\n", ptr2);
// 	return (0);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
