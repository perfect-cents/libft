#include "libft.h"

int	ft_atoi(const char *str)
{
	int		res;
	char	neg;

	res = 0;
	neg = 0;
	while (ft_isspace(*str))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			neg = 1;
		}
		str++;
	}
	while (*str > '0' && *str < '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (neg ? -res : res);
}
