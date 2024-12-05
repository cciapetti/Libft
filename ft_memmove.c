/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:25:45 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 15:12:42 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "ciao";
// 	char		dest[] = "hfhfhfh";
// 	size_t		n;
// 	n = 3;

// 	printf("prima di ft_memmove: %s\n", dest);
// 	memmove(dest, src, n);
// 	//ft_memmove(dest, src, n);
// 	printf("\n");
// 	printf("dopo ft_memmove: %s\n", dest);
// 	return (0);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*pdest;
	char	*psrc;

	i = 0;
	pdest = (char *)dest;
	psrc = (char *)src;
	if (psrc > pdest)
	{
		while (i < (int)n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else if (pdest > psrc)
	{
		i = n;
		while (--i >= 0)
			pdest[i] = psrc[i];
	}
	return (dest);
}
