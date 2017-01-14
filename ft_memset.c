#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;

	if (len == 0)
	{
		return (b);
	}
	p = (unsigned char *)b;
	c = (unsigned char)c;
	while (len)
	{
		*p = c;
		p++;
		len--;
	}
	*p = c;
	return (b);
}
