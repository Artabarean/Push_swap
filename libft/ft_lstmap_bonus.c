/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:36:40 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/31 12:26:42 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newelem;
	void	*content;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		newelem = ft_lstnew(content);
		if (!newelem)
		{
			ft_lstclear(&newlst, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newelem);
		lst = lst->next;
	}
	return (newlst);
}
