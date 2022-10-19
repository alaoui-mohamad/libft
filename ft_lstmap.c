/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 05:21:22 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/14 16:58:29 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_elemt;

	tmp = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		new_elemt = ft_lstnew(f(lst->content));
		if (!(new_elemt))
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new_elemt);
		lst = lst->next;
	}
	return (tmp);
}
