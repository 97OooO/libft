/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:30:47 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/12 21:03:58 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s1;
	int		i;

	s1 = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	i = 0;
	while (str[i])
	{
		*(s1 + i) = *(char *)(str + i);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
