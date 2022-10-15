/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:01:42 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:06:41 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	index;
	size_t	len;
	char	*tmp;

	index = 0;
	len = ft_strlen(s);
	tmp = (char *)malloc(1 + (sizeof(char) * len));
	if (!tmp)
		return (0);
	while (index <= len)
	{
		tmp[index] = s[index];
		index++;
	}
	tmp[index] = '\0';
	return (tmp);
}
