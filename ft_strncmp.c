#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && s1[index] == s2[index] && s1 && s2)
		index++;
	if (s1[index] == s2[index])
		return (0);
	else if (s1[index] > s2[index])
		return (1);
	else
		return (-1);
}
