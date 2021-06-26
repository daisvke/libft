/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <dtanigaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:23:09 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/06/26 13:11:32 by root             ###   ########.fr       */
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
