/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:34:58 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/05 12:12:03 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	y;

	x = ft_strlen(src);
	y = 0;
	while (y < size && dst[y])
		y++;
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j + i < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (x + y);
}
