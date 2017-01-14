#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dp;
	char *sp;
	size_t	i;

	dp = (char *)dst;
	sp = (char *)src;
	if (sp < dp)
	{
		while (len > 0)
		{
			dp[len] = sp[len];
			len++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dp[i] = sp[i];
			i++;
		}
	}
	return (dst);
}
