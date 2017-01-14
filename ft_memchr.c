#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;
	
	p = (const unsigned char *)s;
	c = (unsigned char)c;
	while (n)
	{
		if (*p == c)
		{
			return ((void *)p);
		}
		s++;
		n--;
	}
	return (*p == c ? (void *)p : NULL);
}
