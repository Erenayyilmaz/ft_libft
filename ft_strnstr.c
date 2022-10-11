#include <stdlib.h>

int	ft_strlen(char	*s);
int	memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t		len;
	size_t		index;
	const char	*tmp;

	index = 0;
	tmp = (const char *)s;
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
