/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musoysal <musoysal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:38:13 by musoysal          #+#    #+#             */
/*   Updated: 2025/01/25 22:11:51 by musoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst -> content));
	if (!new)
		return (0);
	tmp = new;
	lst = lst -> next;
	while (lst)
	{
		new -> next = ft_lstnew(f(lst -> content));
		if (!new -> next)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		new = new -> next;
		lst = lst -> next;
	}
	new -> next = NULL;
	return (tmp);
}
