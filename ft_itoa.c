/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:19:46 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:50:57 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	s = ft_itoa(005);
// 	printf("s: %s\n", s);
// 	free(s);
// 	return (0);
// }

static int	ft_numlen(int n)
{
	int	j;

	j = 0;
	if (n < 0)
		j++;
	if (n == 0)
		return (1);
	else if (n != 0)
	{
		while (n != 0)
		{
			n = n / 10;
			j++;
		}
		return (j);
	}
	return (0);
}

static char	*ft_string(int n, int num, char *s)
{
	int		i;

	i = 0;
	while (i < num)
	{
		s[num - i - 1] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	return (s);
}

static char	*ft_ultimatecase(char *s)
{
	s[0] = '-';
	s[1] = '2';
	s[2] = '1';
	s[3] = '4';
	s[4] = '7';
	s[5] = '4';
	s[6] = '8';
	s[7] = '3';
	s[8] = '6';
	s[9] = '4';
	s[10] = '8';
	s[11] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	int		num;
	char	*s;

	i = -1;
	num = n;
	s = (char *)ft_calloc(ft_numlen(n) + 1, 1);
	if (n == -2147483648)
	{
		s = ft_ultimatecase(s);
		return (s);
	}
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s = ft_string((-1) * n, ft_numlen(n), s);
		s[0] = '-';
	}
	else
		s = ft_string(n, ft_numlen(n), s);
	s[ft_numlen(num)] = '\0';
	return (s);
}
