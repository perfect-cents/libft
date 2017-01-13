#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ss;

	if (len == 0 || (ss = ft_strnew(len + 1)) == NULL)
	{
		return (NULL);
	}
	s += start;
	while (len)
	{
		ss[len] = s[len];
		len--;
	}
	ss[len] = s[len];
	return (ss);
}
