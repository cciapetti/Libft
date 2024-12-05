/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:06:10 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 16:50:11 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1 = "abcdefgh";
// 	const char *s2 = "abcdwxyz";
// 	size_t	n = 4;
// 	int	i;

// 	i = strncmp(s1, s2, n);
// 	printf("strncmp: %d\n", i);
// 	i = ft_strncmp(s1, s2, n);
// 	printf("ft_strncmp: %d\n", i);
// 	return (0);
// }

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < n - 1 && s1[i] == s2[i])
			i++;
		return ((unsigned char)s1[i] - s2[i]);
	}
	return (0);
}
