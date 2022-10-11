/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:39:14 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/11 15:11:00 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		((char *)dst)[index] = ((char *)src)[index];
		index++;
	}
}
