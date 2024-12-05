/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:58:48 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:52:08 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_print(unsigned int i, char *s)
// {
// 	printf("i: %d\n s[i]: %c\n", i, s[i]);
// }

// int	main(void)
// {
// 	char	*s = "ciao!";
// 	ft_striteri(s, ft_print);
// 	return (0);
// }