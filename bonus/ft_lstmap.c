#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	new = ft_lstnew(f(lst->content));
	node = new;
	lst = lst->next;
	while (lst)
	{
		node->next = ft_lstnew(f(lst->content));
		node = ndoe->next;
		if(!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new);
}
