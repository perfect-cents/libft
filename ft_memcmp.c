#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
