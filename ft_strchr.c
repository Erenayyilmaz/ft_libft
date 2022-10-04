char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != (char)c && s)
		index++;
	if (index != 0)
		return (s[index]);
	return (0);
}
