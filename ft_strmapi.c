/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:46:04 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/25 00:04:42 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	if (!s)
		return (calloc(1, sizeof(*p)));
	p = malloc(ft_strlen(s) + 1 * sizeof(*p));
	if (!p)
		return (0);
	i = 0;
	while (s[i])
	{
		p[i] = (*f)(i, (char)(s[i]));
		i++;
	}
	p[ft_strlen(s)] = 0;
	return (p);
}
