#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*td;
	const char	*ts;

	td = (char *)dst;
	ts = (const char *)src;
	if ((td == ts) || n == 0)
		return (td);
	if (!td && !ts)
		return (0);
	while (n--)
		td[n] = ts[n];
	return (dst);
}
