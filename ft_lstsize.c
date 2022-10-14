#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		sz;

	tmp = lst;
	sz = 0;
	while (tmp)
	{
		tmp = tmp->next;
		sz++;
	}
	return (sz);
}
