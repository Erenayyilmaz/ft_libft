#include <stdlib.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*st1;
	const char	*st2;

	st1 = s1;
	st2 = s2;
	while (n-- >= 1)
	{
		if (*++st1 != *++st2)
		{
			if (st1[0] < st2[0])
				return (-1);
			else
				return (1);
		}
	}
	return (0);
}
