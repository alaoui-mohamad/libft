/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:40:30 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/14 15:32:23 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	tmp = *lst;
	if (lst)
	{
		if (tmp == NULL)
		{
			*lst = new;
		}
		else
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		}
	}
}
