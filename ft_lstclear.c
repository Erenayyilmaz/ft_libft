#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nl;
	t_list	*ntl;

	nl = *lst;
	while (nl)
	{
		ntl = nl->next;
		del(nl->content);
		free(nl);
		nl = ntl;
	}
	*lst = 0;
}
