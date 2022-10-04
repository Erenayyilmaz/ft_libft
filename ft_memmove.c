
#include <stdlib.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*lasts;
	char		*lastd;

	d = dest;
	s = source;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		*lasts = s + (n - 1);
		*lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
