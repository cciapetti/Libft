/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciapett <cciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:18:54 by cciapett          #+#    #+#             */
/*   Updated: 2024/12/05 18:29:25 by cciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	void	*context = "ciao";
// 	t_list	*node;
// 	node = ft_lstnew_bonus(context);
// 	printf("%s\n",(char *) node -> content);
// 	printf("%s\n",(char *) node -> next);
// 	return (0);
// }

t_list	*ft_lstnew_bonus(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node -> content = content;
	node -> next = NULL;
	return (node);
}
