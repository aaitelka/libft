/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:15 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/13 11:15:38 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*cur;
	void	*con;

	map = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		con = f(lst->content);
		cur = ft_lstnew(con);
		if (!cur)
		{
			del(con);
			ft_lstclear(&map, del);
			return (map);
		}
		ft_lstadd_back(&map, cur);
		lst = lst->next;
	}
	return (map);
}
