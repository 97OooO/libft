/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:42:34 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/07 20:40:07 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = ft_strlen(str);
	if ((char)chr == '\0')
		return ((char *)(str + ft_strlen(str)));
	while (i > 0)
	{
		i--;
		if (str[i] == (char)chr)
			return ((char *)(str + i));
	}
	return (NULL);
}
