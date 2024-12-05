/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:44:22 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:52:47 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	i = 0;
	if (!s)
		return (NULL);
	s1 = (char *)malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	i = 0;
	while (s1[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	return (s1);
}

// char	ft_tolowe(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c > 64 && c < 91)
// 	{
// 		c = c + 32;
// 	}
// 	return (c);
// }

// int	main(int ac, char **av)
// {
// 	char		*sfinal;
// 	(void)ac;
// 	(void)av;

// 	sfinal = ft_strmapi(av[ac - 1], ft_tolowe);
// 	printf("%s\n", sfinal);
// 	return (0);
// }