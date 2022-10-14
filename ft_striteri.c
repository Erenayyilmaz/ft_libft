#include <stdlib.h>

size_t	ft_strlen(const char *s);

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
	{
		return (0);
	}
	while (i < ft_strlen(s))
	{
		(*f)(i, s);
		s++;
		i++;
	}
}
