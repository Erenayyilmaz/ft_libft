/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:59:01 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 01:59:01 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		sz;

	tmp = lst;
	sz = 0;
	while (tmp)
	{
		tmp = tmp->next;
		sz++;
	}
	return (sz);
}
