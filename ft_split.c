/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:41:27 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/23 20:33:31 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*start;
	int		i;

	if (!s)
		return (malloc(sizeof(*split)));
	split = malloc(sizeof(*split) * (ft_wc((char *)s, c) + 1));	
	if (!split)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		start = (char *)s;
		while (*s != c && *s)
			s++;
		split[i] = ft_strsdup((char *)start, s - start);
		i++;
	}
	split[i] = 0;
	return (split);
}
