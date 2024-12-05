/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:11:57 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:51:48 by cciapett         ###   ########.fr       */
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
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
