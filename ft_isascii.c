int	ft_isascii(int c)
{
	return (0 <= c && c <= 127 ? c + 1 : 0);
}
