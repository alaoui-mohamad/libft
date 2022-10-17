/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:40:57 by m-alaoui          #+#    #+#             */
/*   Updated: 2022/10/17 01:59:29 by m-alaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
void one(void *c)
{
	printf("%s\n",(char *)c);
}
int main()
{
	char *e11 = ft_strdup("alaoui");
	char *e22 = ft_strdup("bot");
	
	t_list *e1 = ft_lstnew(e11);
	t_list *e2 = ft_lstnew(e22);
	t_list *tmp;
	
	tmp = e1;
	
	e1->next = e2;
	e2->next = NULL;
	
	ft_lstiter(tmp,one);
} 