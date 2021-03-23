/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:27:34 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/23 17:55:58 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] && (i + j < len))
	{
		if (big[i + j] == little[j])
		{
			if (!little[++j])
				return ((char *)(&big[i]));
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
