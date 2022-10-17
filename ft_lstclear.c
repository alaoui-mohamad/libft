/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:40:46 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/14 03:58:52 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	if (lst)
	{
		if (temp && del)
		{
			while (temp)
			{
				ft_lstdelone(*lst, del);
				(temp) = (temp)->next;
				*lst = temp;
			}
		}
	}
}
