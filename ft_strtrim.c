/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:31:22 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/05 12:12:35 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(const char ch, const char *set)
{
	int	x;

	x = 0;
	while (set[x])
	{
		if (set[x] == ch)
			return (1);
		x++;
	}
	return (0);
}

static char	*first_part(const char *s1, const char *set)
{
	while (*s1)
	{
		if (check_set((char)*s1, set) == 1)
			s1++;
		else
			break ;
	}
	return ((char *)s1);
}

static int	last_part(const char *s1, const char *set, int lngr)
{
	while (lngr != 0)
	{
		if (check_set(s1[lngr - 1], set) == 1)
			lngr --;
		else
			break ;
	}
	return (lngr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		lngr;
	char	*ptr;

	if (!set || !s1)
		return (NULL);
	s1 = first_part(s1, set);
	lngr = ft_strlen(s1);
	lngr = last_part(s1, set, lngr);
	ptr = (char *)malloc((lngr + 1) * sizeof(char));
	if (!ptr)
		return (ptr);
	i = 0;
	while (i < lngr)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
