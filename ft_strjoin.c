/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:14:30 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:52:16 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1 = "ciao INFAME";
// 	char	*s2 = " mondo!!";
// 	char 	*s;

// 	s = ft_strjoin(s1, s2);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		len1;
	int		len2;
	int		i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		s[i] = s2[i - len1];
		i++;
	}
	s[i] = '\0';
	return (s);
}
