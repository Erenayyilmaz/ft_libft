#include <stdlib.h>

static int	is_sep(const char *s, char c, int index)
{
	if (s[index] == c && s[index + 1] != c)
		return (1);
	return (0);
}

static size_t	count_str(const char *s, char c)
{
	size_t	index;
	size_t	sc;

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
	size_t	index;
	size_t	wc;
	size_t	win;

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

void	fill_arr(char *str, char c, int whi, char const *s)
{
	size_t	index;
	size_t	sc;

	index = 0;
	sc = 0;
	while (str[index])
	{
		if (is_sep(str, c, index))
			sc++;
		if (sc == whi)
		{
			while (str[index] != c)
			{
				str[index] = s[index];
				index++;
			}
			break ;
		}
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	char	**strings;
	int		*arr;

	strings = malloc(sizeof(char *) * (count_str(s, c) + 1));
	strings[count_str(s, c)] = 0;
	index = 0;
	arr = count_words(s, c);
	while (strings[index])
	{
		strings[index] = malloc(sizeof(char) * arr[index] + 1);
		fill_arr(strings[index], c, index, s);
		index++;
	}
	strings[index] = 0;
	return (strings);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char	**arr;
	arr = ft_split("qqqeasdasezxcegeetreyert", 'e');
	for (int i = 0; i < 8; i++)
	{
		printf("%s",arr[i]);
	}
	return 0;
}
