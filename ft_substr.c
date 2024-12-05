/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:18:50 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 17:56:37 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	char const *s = "lorem ipsum dolor sit amet";
// 	unsigned int	start = 7;
// 	size_t	len = 0;
// 	char	*ptr;

// 	ptr = ft_substr(s, start, len);
// 	printf("%s\n", ptr);
// 	free(ptr);
// ;	return (0);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[start++];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
