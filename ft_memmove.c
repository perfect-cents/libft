#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	dst = (char *)dst;
	src = (char *)src;
	if (src < dst)
	{
		while (len > 0)
		{
			dst[len] = src[len];
			len++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i);
			i++;
		}
	}
	return (dst);
}