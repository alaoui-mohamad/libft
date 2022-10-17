/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 05:21:22 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/17 10:02:29 by m-alaoui         ###   ########.fr       */
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
void ft(char *t)
{
	
	*(char *)t++;
}
int main()
{

	char *e11 = ft_strdup("alaoui");
	char *e22 = ft_strdup("ala");
	
	t_list *e1 = ft_lstnew(e11);
	t_list *e2 = ft_lstnew(e22);
	
	t_list *tmp;
	t_list *bola;
	tmp = e1;
	
	e1->next = e2;
	e2->next = NULL;
	bola = ft_lstmap(tmp, (void*)&ft,&free);
	
	while (bola)
	{
		printf("->%s\n",bola->content);
		bola = bola->next;
	}
	
} 