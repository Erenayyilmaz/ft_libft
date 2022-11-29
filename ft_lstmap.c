/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:58:51 by kayyilma          #+#    #+#             */
/*   Updated: 2022/11/28 20:06:14 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	t_list	*nn;

	if (!lst || !f || !del)
		return (0);
	nl = NULL;
	while (lst)
	{
		nn = ft_lstnew(f(lst->content));
		if (!nn)
		{
			ft_lstclear(&nl, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&nl, nn);
	}
	return (nl);
}
