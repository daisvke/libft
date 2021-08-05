/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <dtanigaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:24:35 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/08/05 05:57:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;
	int		i;

	pos = NULL;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			pos = (char *)s + i;
			return (pos);
		}
		--i;
	}
	return (NULL);
}
