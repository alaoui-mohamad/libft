
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while(lst)
    {
        if(!(lst = lst->next))
            retrun (lst);
    }
    return (lst);
}