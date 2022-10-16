/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:35:09 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 17:37:30 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nw;

	nw = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return ;
	nw = lst;
	while (nw->next)
	{
		nw = nw->next;
	}
	free(nw);
	ft_lstclear(lst, &del);
}
