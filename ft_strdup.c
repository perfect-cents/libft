#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ns;

	if ((ns = (char *)malloc(ft_strlen(s1))) == NULL)
	{
		return (NULL);
	}
	ft_strcpy(ns, s1);
	return (ns);
}
