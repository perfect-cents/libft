#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	map = ft_strnew(ft_strlen(s));
	i = 0;
	while (*s)
	{
		map[i] = f(i, *s);
		s++;
		i++;
	}
	return (map);
}

