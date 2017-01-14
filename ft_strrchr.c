#include "libft.h"

char	*strrchr(const char *s, int c)
{
	const char	*last_instance;
	
	last_instance = NULL;
	c = (char)c;
	while (*s)
	{
		if (*s == c)
		{
			last_instance = s;
		}
		s++;
	}
	return ((char *)(*s == c ? s : last_instance));
}
