#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		cur = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cur;
	}
	*lst = NULL;
}
		
