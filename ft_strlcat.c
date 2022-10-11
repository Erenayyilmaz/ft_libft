#include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char			*d;
	size_t			n;
	size_t			destlen;

	d = dst;
	while (d && n-- != 0)
		d++;
	destlen = d - dst;
	n = dstsize - destlen;
	
}
