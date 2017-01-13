#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	c = (char)c;
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return ((char *)(*s == c ? s : NULL));
}
