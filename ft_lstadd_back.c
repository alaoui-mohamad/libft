/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:40:30 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/17 00:13:43 by m-alaoui         ###   ########.fr       */
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

// int main()
// {
// 	t_list *e1 = ft_lstnew("alaoui");
// 	t_list *e2 = ft_lstnew("bakh");
// 	t_list *e3 = ft_lstnew("oui");
// 	t_list *e4 = ft_lstnew("boyka");
// 	t_list *tmp;
	
// 	tmp = e1;
	
// 	e1->next = e2;
// 	e2->next = e3;
// 	e3->next = NULL;
	
// 	ft_lstadd_front(&tmp,e4);
// 	while (tmp)
// 	{
// 		printf("->%s\n",tmp->content);
// 		tmp = tmp->next;
// 	}
// }