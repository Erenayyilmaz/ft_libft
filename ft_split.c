#include <stdlib.h>

static int	count_st(char const *s, char c)
{
	size_t	index;
	size_t	count;
	char	**tmp;

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
		{
			count++;
		}
		index++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	char	**strings;

	strings = count_st(s,c);
	index = 0;

}