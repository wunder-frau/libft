#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*temp;

	count = 0;
	temp = lst;
	if (!lst)
		return (0);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return(count);
}
