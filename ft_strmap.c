#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	i;

	map = ft_strnew(ft_strlen(s))
	i = 0;
	while (*s)
	{
		map[i] = f(s)
		s++;
		i++;
	}
	return (map);
}
