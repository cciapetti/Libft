/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:35:36 by cciapett          #+#    #+#             */
/*   Updated: 2024/12/05 18:41:26 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*new = malloc(sizeof(t_list));
// 	t_list	*lst = malloc(sizeof(t_list));
// 	new -> content = (void *)"ciao";
// 	lst -> content = (void *)"mondo";
// 	ft_lstadd_front_bonus(&lst, new);
// 	printf("%s\n", (char *) new -> content);
// 	new = new -> next;
// 	printf("%s\n", (char *) new -> content);
// 	return (0);
// }

void	ft_lstadd_front_bonus(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
