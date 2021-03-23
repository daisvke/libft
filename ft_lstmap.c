/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 23:31:14 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/23 15:12:15 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		printf("first-content (before): %d\n", *((int *)(first->content)));
		while (lst)
		{
			if (!(elem = ft_lstnew((*f)(lst->content))))
			{
				ft_lstclear(&lst, del);
				return (0);
			}
		printf("first-content (while): %d\n", *((int *)(first->content)));
		
			ft_lstadd_back(&first, elem);
			elem = elem->next;
			lst = lst->next;
		}
		}
			printf("first-next-content (after): %d\n", *((int *)(first->next->content)));
	return (first);
}


#include <stdio.h>

int		*ft_multen(int *data)
{
	int	*n;
	int	nb;

	nb = *((int *)data) * 100;	
	n = &nb;
	return (n);
}

void	*ft_change(void *data)
{
	data = ft_multen(data);
	printf("%p", data);
	return (data);
}

int		main(void)
{
	t_list	*l = malloc(sizeof(*l));
	t_list	*l2 = malloc(sizeof(*l2));
	t_list	*l3 = malloc(sizeof(*l3));
	//t_list	*new = malloc(sizeof(*new));
	int		n = 1;
	int		n2 = 2;
	int		n3 = 3;
	
	l->next = l2;
	l->content = &n;
	l2->next = l3;
	l2->content = &n2;
	l3->next = 0;
	l3->content = &n3;

	t_list	*new;
	new = ft_lstmap(l, ft_change, ft_lstrmdata);
	
	/*int		nn = 4;
	new->content = &nn;
	new->content = ft_change(new->content);
	new->next = l;
	l->content = ft_change(l->content);
	printf("%d", *((int *)(new->next->content)));*/
	
	printf("new-content: %d\n", *((int *)(new->content)));
	ft_lstclear(&l, ft_lstrmdata);
	ft_lstclear(&new, ft_lstrmdata);
	return (0);
}
