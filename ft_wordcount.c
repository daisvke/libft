/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <dtanigaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 01:30:54 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/04/13 17:25:23 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_wordcount(char *s, int sep)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		while (*s == (char)sep)
			s++;
		if (!*s)
			break ;
		while (*s != (char)sep && *s)
			s++;
		wc++;
	}
	return (wc);
}
