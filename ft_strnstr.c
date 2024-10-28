/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:48:04 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/05 12:12:23 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t ln)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	if (!ln)
		return (NULL);
	while (str[x] && x < ln)
	{
		y = 0;
		while (str[x + y] == substr[y] && (x + y) < ln)
		{
			y++;
			if (substr[y] == '\0')
				return ((char *)str + x);
		}
		x++;
	}
	return (NULL);
}
