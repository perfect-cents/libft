#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	if (len == 0)
	{
		return (b);
	}
	c = (unsigned char)c;
	len--;
	while (len)
	{
		b[len] = c;
		len--;
	}
	b[len] = c;
}
