#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t 	i;
	char	*tmp;

	tmp = (char *)malloc(ft_strlen(s) + 1);
	if (!tmp || !f || !s)
	{
		return (0);
	}
	i =0;
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	return (tmp);
}
