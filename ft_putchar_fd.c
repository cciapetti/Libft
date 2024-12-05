/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:30:42 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:51:21 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;
// 	fd = open("prova.txt", O_CREAT);
// 	fd = open("prova.txt", O_WRONLY, 777);
// 	char	c = 'F';
// 	ft_putchar_fd(c, 1);
// 	close(fd);
// 	return (0);
// }

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
