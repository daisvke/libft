#include "libft.h"
#include <stdio.h>
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*elem;

	if (lst)
	{
		if (!(first = ft_lstnew((*f)(lst->content))))
			return (0);
		elem = first->next;
		lst = lst->next;
		printf("first-content (before): %s\n", (char *)(first->content));
		while (lst)
		{
			if (!(elem = ft_lstnew((*f)(lst->content))))
			{
				ft_lstclear(&lst, del);
				return (0);
			}
		printf("first-content (while): %s\n", (char *)(first->content));
		
			ft_lstadd_back(&first, elem);
			elem = elem->next;
			lst = lst->next;
		}
		}
			printf("first-content (after): %s\n", (char *)(first->next->content));
	return (first);
}


#include <stdio.h>

void	*ft_change(void *data)
{
	char	*p;

	p = ft_strdup((char *)data);
	p[0] = 'A';
	data = p;
	return (data);
}

int		main(void)
{
	t_list	*l = malloc(sizeof(*l));
	t_list	*l2 = malloc(sizeof(*l2));
	t_list	*l3 = malloc(sizeof(*l3));
	//t_list	*new = malloc(sizeof(*new));
	
	l->next = l2;
	l->content = "first";
	l2->next = l3;
	l2->content = "second";
	l3->next = 0;
	l3->content = "third";

	t_list	*new;
	new = ft_lstmap(l, ft_change, ft_lstrmdata);
	
	/*int		nn = 4;
	new->content = &nn;
	new->content = ft_change(new->content);
	new->next = l;
	l->content = ft_change(l->content);
	printf("%d", *((int *)(new->next->content)));*/
	
	printf("new-content (after): %s\n", (char *)(new->content));
	return (0);
}

