/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:42:02 by cciapett          #+#    #+#             */
/*   Updated: 2024/12/05 14:53:34 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char const	*s1 = " \t\n";
// 	char const	*set = "";
// 	char	*s;
// 	printf(" prima di ft_strtim() :%s\n", s1);
// 	s = ft_strtrim(s1, set);
// 	printf(" dopo ft_strtim() :%s\n", s);
// 	free(s);
// 	return (0);
// }

static int	ft_strcmp(char const *s1, char s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || s1 == NULL)
		return (NULL);
	if (!set || set == NULL)
		return (ft_strdup(s1));
	while (ft_strcmp(set, s1[i]) == 0)
		i++;
	if ((int)ft_strlen(s1) == i)
		return (ft_strdup(""));
	while (ft_strcmp(set, s1[(int)ft_strlen(s1) - j - 1]) == 0)
		j++;
	s = (char *)malloc(sizeof(char) * ((int)ft_strlen(s1) - i - j + 1));
	if (!s)
		return (NULL);
	while (i < (int)ft_strlen(s1) - j)
		s[k++] = s1[i++];
	s[k] = '\0';
	return (s);
}
