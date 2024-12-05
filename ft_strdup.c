/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:41:00 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:51:59 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const	char *s = "ciao";
// 	char	*s1;
// 	char	*s2;

// 	s1 = strdup(s);
// 	s2 = ft_strdup(s);
// 	printf("strdup: %s\n", s1);
// 	printf("ft_strdup: %s\n", s2);
// 	free(s1);
// 	free(s2);
// }

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*s1;

	i = 0;
	len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
