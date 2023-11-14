#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if(!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		if(!(new = ft_lstnew(f(lst->content))))
		{
			while(head)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return(head);
}
