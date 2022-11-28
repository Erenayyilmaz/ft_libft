/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:45:24 by kayyilma          #+#    #+#             */
/*   Updated: 2022/11/21 18:08:53 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	size_t		index;
	char		*tmp;

	index = 0;
	tmp = (char *)s;
	while (index < n)
	{
		tmp[index] = 0;
	}
}
