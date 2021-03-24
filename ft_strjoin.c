/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:34:49 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/25 00:15:54 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*joined;

	if (!s1 || !s2)
		return (calloc(1, sizeof(*joined)));
	len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(*joined) * (len + 1));
	if (!joined)
		return (0);
	ft_memcpy(joined, s1, ft_strlen(s1));
	ft_memcpy(&joined[ft_strlen(s1)], s2, ft_strlen(s2));
	joined[len] = 0;
	return (joined);
}
