/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:58:04 by cciapett          #+#    #+#             */
/*   Updated: 2024/11/20 17:03:49 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;
// 	int	c1;

// 	c = c1 = 48;
// 	printf("prima di tolower: %c\n", c);
// 	printf("prima di ft_tolower: %c\n", c1);
// 	c = tolower(c);
// 	c1 = ft_tolower(c1);
// 	printf("dopo tolower: %c\n", c);
// 	printf("dopo ft_tolower: %c\n", c1);
// 	return (0);
// }

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
