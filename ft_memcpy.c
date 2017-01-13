#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	dst = (unsigned char *)dst;
	src = (unsigned char *)src;
	i = 0;
	while (n)
	{
		dst[i] = *src;
		i++;
		src++;
		n--;
	}
	return ((void *)dst);
}
