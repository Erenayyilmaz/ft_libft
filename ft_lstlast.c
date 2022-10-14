#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*new;
	new = lst;
	while (lst->next)
	{
		lst = lst->next;
		new = lst;
	}
	return (new);
}