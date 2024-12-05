/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:47:45 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 16:24:57 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s = "bonjour";
// 	int	c = 'b';
// 	const char	*s1 = "bonjour";
// 	int	c1 = 'b';

// 	printf("prima di strrchr: %s\n", s);
// 	printf("prima di ft_strrchr: %s\n", s1);
// 	s = strrchr(s, c);
// 	s1 = ft_strrchr(s1, c1);
// 	printf("dopo strrchr: %s\n", s);
// 	printf("dopo ft_strrchr: %s\n", s1);
// 	return (0);
// }

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	toggle;

	i = 0;
	j = 0;
	toggle = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = i;
			toggle = 1;
		}
		i++;
	}
	if (c == s[i])
		return ((char *)&s[i]);
	if (j == 0 && toggle == 0)
		return (NULL);
	return ((char *)&s[j]);
}
