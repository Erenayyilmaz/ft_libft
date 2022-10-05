#include <stdlib.h>

void	*memchr(const void *s, int c, size_t n)
{
	const char	*tmp;
	size_t		index;

	index = 0;
	tmp = (const char *)s;
	while (index < n)
	{
		if (tmp[index] == c)
			return (&tmp[index]);
		index++;
	}
	return (0);
}
