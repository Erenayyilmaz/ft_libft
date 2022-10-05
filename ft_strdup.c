#include <stdlib.h>

int	ft_strlen(char *);

char	*ft_strdup(const char *s)
{
	size_t	index;
	size_t	len;
	char	*tmp;

	index = 0;
	len = ft_strlen(s);
	tmp = (char *)malloc(1 + (sizeof(char) * len));
	if(!tmp)
		return (0);
	while (index <= len)
	{
		tmp[index] = s[index];
		index++;
	}
	tmp[index] = '\0';
	return (tmp);
}
