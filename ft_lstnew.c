/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:58:56 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:05:44 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*nl;

	nl = (t_list *)malloc(sizeof(t_list));
	if (!nl)
		return (0);
	nl->content = content;
	nl->next = NULL;
	return (nl);
}
