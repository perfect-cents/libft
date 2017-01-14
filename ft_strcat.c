#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (*s2 != '\0')
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}