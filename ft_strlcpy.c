#include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	index;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen < dstsize - 1)
		ft_memcpy(dst, src, srclen - 1);
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
