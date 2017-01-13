#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	dst = (unsigned char *)dst;
	src = (unsigned char *)src;
	c = (unsigned char)c;
	while (n)
	{
		*dst = *src;
		dst++;
		if (*src == c)
		{
			return ((void *)dst);
		}
		src++;
		n--;
	}
	return (NULL);
}
