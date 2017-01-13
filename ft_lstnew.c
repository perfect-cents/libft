#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lst;

	if ((lst = (t_list *)ft_memalloc(sizeof(*lst))) == NULL)
	{
		return (NULL);
	}
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		if ((lst->content = ft_memalloc(content_size)) == NULL)
		{
			return (NULL);
		}
		ft_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (list);
}