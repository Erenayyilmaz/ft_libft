/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:04:03 by kayyilma          #+#    #+#             */
/*   Updated: 2022/11/21 18:07:29 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	char	sc;
	size_t	len;

	c = *find;
	sc = *s;
	if (c++ != '\0')
	{
		len = ft_strlen(find);
		while (ft_strncmp(s, find, len) != 0)
		{
			while (sc != c)
			{
				if (*(s + 1) == '\0' || slen-- < 1)
				{
					sc = *s++;
					return (0);
				}
			}
			if (len > slen)
				return (0);
		}
		s--;
	}
	return ((char *)s);
}
