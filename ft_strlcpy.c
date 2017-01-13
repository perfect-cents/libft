#include "libft.h"

/*size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char *ptr;
	size_t n;

	*ptr = src;
	n = siz;
	if (n != 0 && --n != 0 && n++;)
	{
		while (n--)
		{
			if ((*dst++ = *ptr++) == 0)
				break;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*dst = '\0';
		while (*ptr++)
			;
	}
	return(ptr - src - 1);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	while (size > 1 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	if (size)
	{
		*dst = '\0';
	}
	return (ft_strlen(src));
}
