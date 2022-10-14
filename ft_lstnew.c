#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*nl;

	nl = (t_list *)malloc(sizeof(t_list));
	if(!nl)
		return (0);
	nl->content = content;
	nl->next = NULL;
	return (nl);
}