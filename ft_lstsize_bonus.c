/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:03:21 by cciapett          #+#    #+#             */
/*   Updated: 2024/12/05 18:27:14 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

int	main(void)
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));

	node1 -> next = NULL;
	node2 -> next = node3;
	node3 -> next = NULL;
	node1 -> content = (void *)"10";
	node2 -> content = (void *)"20";
	node3 -> content = (void *)"30";
	printf("%d\n", ft_lstsize(NULL));

	printf("%s\n",(char *) node1 -> content);
	printf("%s\n", (char *)node2 -> content);
	printf("%s\n", (char *)node3 -> content);
	return (0);
} */

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
		len++;
	}
	return (len + 1);
}
