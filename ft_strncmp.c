/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:54:36 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/09 21:57:09 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
/*
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("\nft_strncmp :\t%d\n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
		printf("strncmp :\t%d\n", strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	}
	printf("\n");
	return (0);
}*/


int	main(int argc, char *argv[])
{
	char 	t[] = {'j', 'a', 254};
	char	u[] = {'j', 'a', 252};
	if (argc == 2)
	{
		printf("\nft_strncmp :\t%d\n", ft_strncmp(t, u, ft_atoi(argv[1])));
		printf("strncmp :\t%d\n", strncmp(t, u, ft_atoi(argv[1])));
	}
	printf("\n");
	return (0);
}

