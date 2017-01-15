#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dp;
	const unsigned char *sp;

	dp = (unsigned char *)dst;
	sp = (const unsigned char *)src;
	while (n)
	{
		*dp = *sp;
		dp++;
		sp++;
		n--;
	}
	return (dst);
}