/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:30:48 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:51:37 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;

// 	fd = open("prova.txt", O_CREAT);
// 	fd = open("prova.txt", O_WRONLY, 777);
// 	char	*s = "Hello world!!!!";
// 	ft_putendl_fd(s, 1);
// 	return (0);
// }

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
