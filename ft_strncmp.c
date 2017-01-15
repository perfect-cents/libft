#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	n--;
	while (n /*&& *s1 */&& *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
