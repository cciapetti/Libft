/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:58:37 by cciapett          #+#    #+#             */
/*   Updated: 2024/12/05 15:39:01 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rows(char const *s, char c)
{
	int	i;
	int	rows;

	i = 0;
	rows = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			rows++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (rows);
}

static int	ft_cols(char const *s, char c, int word)
{
	int	j;
	int	len;
	int	i;

	j = 0;
	i = 0;
	len = 0;
	while (j < word)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static int	ft_fill(const char *s, char c, char *matrix)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		matrix[j] = s[i];
		i++;
		j++;
	}
	matrix[j] = '\0';
	return (i);
}

void	ft_free_matrix(char **matrix, int i)
{
	while (i >= 0)
	{
		free(matrix[i]);
		i--;
	}
	free(matrix);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		ptr;
	int		cols;
	char	**matrix;

	i = 0;
	ptr = 0;
	cols = 0;
	matrix = (char **)malloc((ft_rows(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (i < ft_rows(s, c))
	{
		cols = ft_cols(s, c, i);
		matrix[i] = (char *)malloc((cols + 1) * sizeof(char));
		if (!matrix[i])
		{
			ft_free_matrix(matrix, i);
			return (NULL);
		}
		ptr += ft_fill(&s[ptr], c, matrix[i]);
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

// int	main(void)
// {
// 	char	**matrix;
// 	int i = 0;
// 	char const	*s = ",...ciao,,, 3, aaaa,,";
// 	char	c = ',';
// 	matrix = ft_split(s, c);
// 	while (i < ft_rows(s, c))
// 	{
// 		printf("%s\n", matrix[i]);
// 		free(matrix[i]);
// 		i++;
// 	}
// 	free(matrix);
// 	return (0);
// }
