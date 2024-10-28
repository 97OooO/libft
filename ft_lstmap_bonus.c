/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:18:28 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/03 10:44:54 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nvl_liste;
	t_list	*nv_noeud;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	nvl_liste = NULL;
	while (lst)
	{
		set = f(lst -> content);
		nv_noeud = ft_lstnew(set);
		if (!nv_noeud)
		{
			del(set);
			ft_lstclear(&nvl_liste, (*del));
			return (nvl_liste);
		}
		ft_lstadd_back((&nvl_liste), nv_noeud);
		lst = lst->next;
	}
	return (nvl_liste);
}
