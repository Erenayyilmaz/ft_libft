/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:59:10 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 01:59:11 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	const char	*tmp;
	size_t		index;

	index = 0;
	tmp = (const char *)s;
	while (index < n)
	{
		if (tmp[index] == c)
			return (&tmp[index]);
		index++;
	}
	return (0);
}
