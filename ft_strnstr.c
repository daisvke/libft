/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:27:34 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/18 19:50:42 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		first;

	if (!*little)
		return ((char *)big);
	i = 0;
	first = 1;
	while (big[i] && len--)
	{
		j = 0;
		while (big[i + j] == little[j] && len)
		{
			if (!first)
				len--;
			first = 0;
			if (!little[j + 1])
				return ((char *)(&big[i]));
			j++;
		}
		i++;
	}
	return (0);
}
