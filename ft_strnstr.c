/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:04:03 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:04:04 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t		len;
	size_t		index;
	char		*tmp;

	index = 0;
	tmp = s;
	len = ft_strlen(find);
	while (s[index + len] != '\0')
	{
		if (!ft_memcmp(tmp, find, (len + 1)))
			tmp++;
		else
			return (tmp);
		index++;
	}
}
