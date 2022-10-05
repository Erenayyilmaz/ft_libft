int	ft_isdigit(int	c);

int	atoi(const char *nptr)
{
	int	index;
	int	sum;

	sum = 0;
	index = 0;
	while (!ft_isdigit(nptr[index]))
		index++;
	while (ft_isdigit(nptr[index]))
	{
		sum *= 10;
		sum += (nptr[index] - '0');
		index++;
	}
	return (sum);
}
