/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:04:43 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:04:44 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	index;

	tmp = (char *)malloc((sizeof(char) * len) + 1);
	while (index < len)
	{
		tmp[index] = s[start + index];
		index++;
	}
	tmp[index] = '\0';
	return (tmp);
}
