#include "libft.h"

static int	ft_itoa_len(int n)
{
	int	len;

	if (n == 0)
	{
		return (1);
	}
	len = n < 0 ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*a;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if ((a = ft_strnew((len = ft_itoa_len(n)))) == NULL)
	{
		return (NULL);
	}
	if (n <= 0)
	{
		*a = n < 0 ? '-' : '0';
		n *= -1;
	}
	while (n > 0)
	{
		len--;
		a[len] = (n % 10) + '0';
		n /= 10;
	}
	return (a);
}
