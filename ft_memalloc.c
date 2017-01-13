#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = malloc(size)) == NULL)
	{
		free(mem);
		return (NULL);
	}
	else
	{
		return (memset(mem, 0, size));
	}
}
