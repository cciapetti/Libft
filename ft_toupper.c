/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:49:42 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/23 17:16:02 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;
// 	int	c1;

// 	c = c1 = 65;
// 	printf("prima di toupper: %c\n", c);
// 	printf("prima di ft_toupper: %c\n", c1);
// 	c = toupper(c);
// 	c1 = ft_toupper(c1);
// 	printf("dopo toupper: %c\n", c);
// 	printf("dopo ft_toupper: %c\n", c1);
// 	return (0);
// }

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c -32;
	return (c);
}
