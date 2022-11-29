/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:50:51 by kayyilma          #+#    #+#             */
/*   Updated: 2022/11/28 20:05:15 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int	is_sep(const char *s, char c, int index)
{
	if (s[index] == c && s[index + 1] != c)
		return (1);
	return (0);
}

static int	count_str(const char *s, char c)
{
	int	index;
	int	sc;

	sc = 0;
	index = 0;
	while (s[index])
	{
		if (is_sep(s, c, index))
			sc++;
		index++;
	}
	return (sc);
}

static int	*count_words(const char *s, char c)
{
	int		*arr;
	int		index;
	int		wc;
	int		win;

	index = 0;
	wc = 0;
	win = 0;
	arr = (int *)malloc(sizeof(int) * count_str(s, c));
	while (s[index])
	{
		wc++;
		if (is_sep(s, c, index))
		{
			arr[win] = wc - 1;
			win++;
			wc = 0;
		}
		index++;
	}
	return (arr);
}	

static void	fill_arr(char **str, char c, int whi, char const *s)
{
	int	index;
	int	sc;

	index = 0;
	sc = 0;
	while (*str[index])
	{
		if (is_sep(*str, c, index))
			sc++;
		if (sc == whi)
		{
			while (*str[index] != c)
			{
				*str[index] = s[index];
				index++;
			}
			break ;
		}
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**strings;
	int		*arr;

	strings = malloc(sizeof(char *) * (count_str(s, c) + 1));
	strings[count_str(s, c)] = 0;
	index = 0;
	arr = count_words(s, c);
	while (strings[index])
	{
		strings[index] = malloc(sizeof(char) * arr[index] + 1);
		fill_arr(&strings[index], c, index, s);
		index++;
	}
	strings[index] = 0;
	return (strings);
}
*/

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
