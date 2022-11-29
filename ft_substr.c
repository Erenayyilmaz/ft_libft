/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:04:43 by kayyilma          #+#    #+#             */
/*   Updated: 2022/11/28 20:04:07 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	size;

	if (!s)
		return (0);
	size = 0;
	s_len = ft_strlen(s);
	if (s_len > start)
		size = s_len - start;
	if (size > len)
		size = len;
	result = (char *)malloc(size + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s + start, size + 1);
	return (result);
}
