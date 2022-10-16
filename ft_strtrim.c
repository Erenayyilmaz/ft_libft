/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:04:33 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 15:51:56 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char *s, const char *set)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	first;
	size_t	last;
	char	*tmp;

	first = 0;
	last = ft_strlen(s1) - 1;
	while (s1[first] != '\0' && is_in_set(s1, set))
		first++;
	while (s1[last] != '\0' && is_in_set(s1, set))
		last--;
	if (last > first)
		tmp = (char *)malloc(sizeof(char) * (last - first - 1));
	if (!tmp)
		return (0);
	index = 0;
	while (first < last)
		tmp[index++] = s1[first++];
	tmp[index] = '\0';
	return (tmp);
}
