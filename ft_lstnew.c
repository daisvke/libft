/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:38:05 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/23 12:53:44 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
struct s_list *res;

	if (!(res = malloc(sizeof(struct s_list))))
		return (NULL);
	res[0].content = content;
	res[0].next = NULL;
	return (res);
}
