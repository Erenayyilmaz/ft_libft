/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:45:24 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 01:56:23 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	int		index;
	char	*tmp;

	index = 0;
	tmp = (char *)s;
	while (index < n)
	{
		tmp[index] = 0;
	}
}
