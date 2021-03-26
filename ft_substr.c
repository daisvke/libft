/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:09:08 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/25 22:46:54 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	size;

	if (!s || start >= ft_strlen(s))
		return (calloc(1, sizeof(char)));
	size = 0;
	i = start;
	while (s[i++] && len--)
		size++;
	p = ft_strsdup((char *)&s[start], size);
	if (!p)
		return (0);
	return (p);
}
