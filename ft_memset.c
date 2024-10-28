/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:37:26 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/12 21:03:14 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *x, int y, size_t ln)
{
	size_t	i;

	i = 0;
	while (i < ln)
	{
		*(unsigned char *)(x + i) = (unsigned char)y;
		i++;
	}
	return (x);
}
