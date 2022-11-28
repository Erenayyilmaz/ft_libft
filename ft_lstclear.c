/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:35:09 by kayyilma          #+#    #+#             */
/*   Updated: 2022/11/28 11:07:38 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nw;
	t_list	*tmp;

	nw = (t_list *)malloc(sizeof(t_list));
	tmp = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return ;
	nw = *lst;
	while (nw->next)
	{
		tmp = nw;
		nw = nw->next;
		free(tmp);
	}
	ft_lstclear(lst, del);
}
