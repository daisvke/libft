/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <dtanigaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:23:09 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/06/26 12:53:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char **array, size_t arr_size)
{
	size_t	i;

	i = 0;
	while (i < arr_size)
	{
		free(array[i]);
		++i;
	}
	free(array);
	array = NULL;
}
