#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dp;
	const unsigned char *sp;
	
	dp = (unsigned char *)dst;
	sp = (const unsigned char *)src;
	c = (unsigned char)c;
	while (n)
	{
		*dp = *sp;
		dp++;
		if (*sp == c)
		{
			return ((void *)dp);
		}
		sp++;
		n--;
	}
	return (NULL);
}
