/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:36:23 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/29 11:51:42 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>

// int	main(void)
// {
// 	ft_putnbr_fd(2147483647, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-100000, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(42, 1);
// 	return (0);
// }

void	ft_putnbr_fd(int n, int fd)
{
	int	num;
	int	uni;

	num = 0;
	uni = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n >= 0 && n <= 9)
	{
		num = n + 48;
		write(fd, &num, 1);
	}
	else if (n > 9)
	{
		uni = (n % 10) + 48;
		ft_putnbr_fd(n / 10, fd);
		write(fd, &uni, 1);
	}
	else
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
}
