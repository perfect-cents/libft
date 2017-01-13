#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ns;
	size_t	len;

	len = ft_strlen(s1);
	if ((ns = ft_strnew((n < len ? n : len) + 1)) == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(ns, s1, n);
	return (ns);
}
