/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:25:59 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/03 16:27:48 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memset(void *b, int c, size_t len)
{
	int		index;
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
