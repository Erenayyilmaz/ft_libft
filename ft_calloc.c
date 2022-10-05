#include <stdlib.h>
void	*ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;
	tmp = malloc(nmemb * size);//no typecast size ne la
	if (!tmp)
		return (tmp);
	ft_memset(tmp, 0x0, nmemb * size);
	retrun (tmp);
}
