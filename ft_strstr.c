#include <stdlib.h>

char	*ft_strstr(const char *big, const char *little)
{
	int	i;

	if (!*little)
	{
		return ((char *)big);
	}
	while (*big)
	{
		i = 0;
		while (big[i] == little[i])
		{
			i++;
			if (!little[i])
			{
				return ((char *)big);
			}
		}
		big += i;
		big++;
	}
	return (NULL);
}
