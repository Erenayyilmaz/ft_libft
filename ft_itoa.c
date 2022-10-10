#include <stdlib.h>

static int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static char	*putmembers(char *s, int num, size_t len, int neg)
{
	size_t	i;

	i = 0;
	s[len] = '\0';
	while (i < len)
	{
		s[len - i - 1] = (num % 10) + '0';
		i++;
		num /= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	long	len;
	long	tmp;

	neg = 0;
	tmp = n;
	len = 0;
	neg = is_neg(n);
	if (neg == 1)
	{
		n = n * (-1);
		len++;
	}
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * len);
	return (putmembers(str, n, len, neg));
}
