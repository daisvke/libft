/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:09:08 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/23 20:32:25 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (p = malloc(sizeof(*p)));
	p = malloc(sizeof(*p) * (len + 1));
	if (!p)
		return (0);
	i = 0;
	while (s[start] && len--)
	{
		p[i] = s[start++];
		i++;
	}
	p[i] = 0;
	return (p);
}
