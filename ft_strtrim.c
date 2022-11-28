/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:04:33 by kayyilma          #+#    #+#             */
/*   Updated: 2022/11/28 10:36:58 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	is_in_set(char s, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int	i_loop(int i, char const *s1, char const *set)
{
	i = ft_strlen(s1) - 1;
	if (i != -1)
		while (i >= 0 && is_in_set(s1[i], set))
			i--;
	return (i);
}

static int	i_while(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	char			*outstr_start;
	char			*outstr_end;
	char			*outstr;

	if (!s1 || !set)
		return (0);
	i = i_while(s1, set);
	outstr_start = (char *)&s1[i];
	i = i_loop(i, s1, set);
	outstr_end = (char *)&s1[i];
	if (!*s1 || outstr_end == outstr_start)
	{
		outstr = malloc(sizeof(char) * 2);
		ft_strlcpy(outstr, outstr_start, 2);
	}
	else
	{
		outstr = malloc(sizeof(char) * (outstr_end - outstr_start + 2));
		ft_strlcpy(outstr, outstr_start, outstr_end - outstr_start + 2);
	}
	if (!outstr)
		return (0);
	return (outstr);
}
