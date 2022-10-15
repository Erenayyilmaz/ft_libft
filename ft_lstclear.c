/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:58:30 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 01:58:32 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nl;
	t_list	*ntl;

	nl = *lst;
	while (nl)
	{
		ntl = nl->next;
		del(nl->content);
		free(nl);
		nl = ntl;
	}
	*lst = 0;
}
