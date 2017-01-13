int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
