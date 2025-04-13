#include "libft.h"

int	ft_lstsize(t_list *lst)
{
        int	size;
        t_list		*temp;

	size = 0;
	temp = lst;
	if (!lst)
		return (0);
	while (temp->next)
	{
		size++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		size++;
	return (size);
}
