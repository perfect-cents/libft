char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	if (!*little)
	{
		return (big);
	}
	i = 0;
	while (len && *big)
	{
		i = 0;
		while (len && *big[i] == *little[i])
		{
			i++;
			if (!little[i])
			{
				return (big);
			}
			len--;
		}
		big += i;
		big++;
		len--;
	}
	return (NULL);
}
