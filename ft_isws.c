/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isws.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <dtanigaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:47:43 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/03/24 17:47:46 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isws(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}
