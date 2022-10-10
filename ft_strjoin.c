#include <stdlib.h>

int	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	index;
	char	*tmp;

	index = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	tmp = (char *)malloc(len1 + len2 - 1);
	if (!tmp)
		return (0);
	while (index < len1 - 1)
	{
		tmp[index] = s1[index];
		index++;
	}
	index = 0;
	while (index < len2)
	{
		tmp[len1 + index] = s2[index];
		index++;
	}
	return (tmp);
}
