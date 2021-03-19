/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:21:42 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/16 18:36:42 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)ptr;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	if (!(char)c)
			return (s);
	return (0);
}
