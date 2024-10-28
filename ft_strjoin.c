/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:26:44 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/18 10:39:20 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	x;
	unsigned int	y;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char));
	if (!ptr)
		return (ptr);
	x = 0;
	while (s1[x])
	{
		ptr[x] = s1[x];
		x++;
	}
	y = -1;
	while (s2[++y])
		ptr[x + y] = s2[y];
	ptr[x + y] = '\0';
	return (ptr);
}
