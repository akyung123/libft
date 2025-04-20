/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 08:56:42 by akkim             #+#    #+#             */
/*   Updated: 2025/04/14 09:00:13 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_BONUS_H
# define LIBFT_BONUS_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# define MAX_SIZE SIZE_MAX

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

int	ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void	*content);

#endif
