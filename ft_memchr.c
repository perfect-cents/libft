#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;
	
	p = (const unsigned char *)s;
	c = (unsigned char)c;
	i = n;
	while (i)
	{
		if (*p == c)
		{
			return ((void *)p);
		}
		p++;
		i--;
	}
	if (n)
	{
		return (*p == c ? (void *)p : NULL);
	}
	return (NULL);
}
