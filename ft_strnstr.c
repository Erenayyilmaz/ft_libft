#include <stdlib.h>

int	ft_strlen(char	*s);
int	ft_memcmp(const void *, const void *, size_t)


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
		if (!ft_memcmp(tmp, find, len + 1))//len+1 i kontrol et
			tmp++;
		else
			return (tmp);
		index++;
	}
	return (0);
}
