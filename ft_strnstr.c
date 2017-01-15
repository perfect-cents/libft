#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
	{
		return ((char *)big);
	}
	i = 0;
	while (len && *big)
	{
		i = 0;
		while (len && big[i] == little[i])
		{
			i++;
			if (!little[i])
			{
				return ((char *)big);
			}
			len--;
		}
		big += i;
		big++;
		len--;
	}
	return (NULL);
}
