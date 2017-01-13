#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	s = (unsigned char *)s;
	c = (unsigned char)c;

	while (n)
	{
		if (*s == c)
		{
			return ((void *)s);
		}
		s++;
		n--;
	}
	return (*s == c ? (void *)s : NULL);
}
