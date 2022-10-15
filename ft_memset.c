/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:25:59 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:00:20 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		index;
	char	*tmp;

	index = 0;
	tmp = (char *)b;
	while (index < len)
	{
		tmp[index] = c;
		index++;
	}
	return (b);
}
