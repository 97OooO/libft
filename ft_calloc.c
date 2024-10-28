/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:37:55 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/19 20:34:10 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t sz)
{
	void	*tabl;

	if ((int)cnt < 0 || (int)sz < 0)
		return (NULL);
	tabl = malloc(cnt * sz);
	if (tabl == NULL)
		return (NULL);
	ft_bzero(tabl, cnt * sz);
	return (tabl);
}
