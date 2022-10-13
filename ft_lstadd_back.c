
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
	{
		if (!((*lst)->next))
		{
			*lst = new;
		}
		else
		{
			while (lst)
				(*lst) = (*lst)->next;
			(*lst) = new;
		}
	}
}