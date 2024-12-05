/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:05:10 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 18:33:28 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s = "tripouille";
// 	int	c = 'a';
// 	const char	*s1 = "tripouille";
// 	int	c1 = 'a';

// 	printf("%d\n \n %c \n",ft_strchr(s, 't' + 256) == s,('t' + 256 ));
// 	printf("prima di strchr: %s\n", s);
// 	printf("prima di ft_strchr: %s\n", s1);
// 	s = strchr(s, c);
// 	s1 = ft_strchr(s1, c1);
// 	printf("dopo strchr: %s\n", s);
// 	printf("dopo ft_strchr: %s\n", s1);
// 	return (0);
// }

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
