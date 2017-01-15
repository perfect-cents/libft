#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;
	
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	n--;
	while (n && *p1 == *p2)
	{
		p1++;
		p2++;
		n--;
	}
	return (*p1 - *p2);
}
