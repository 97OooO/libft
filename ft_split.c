/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:35:08 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/05 12:11:37 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnter(char const *s, char c)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	if (!s)
		return (0);
	while (s[x])
	{
		if (s[x] != c)
		{
			y++;
			while (s[x] && s[x] != c)
				x++;
		}
		while (s[x] && s[x] == c)
			x++;
	}
	return (y);
}

static int	words(const char *s, char c)
{
	int	w;
	int	x;

	w = 0;
	x = 0;
	while (s[x])
	{
		if (s[x] && s[x] == c)
			x++;
		else
		{
			while (s[x] && s[x] != c)
			{
				w++;
				x++;
			}
			if (s[x - 1] != c)
				return (w);
		}
	}
	return (0);
}

static char	**ft_fr(char **ptr, int x)
{
	while (x > 0)
	{
		x--;
		free(ptr[x]);
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		x;

	x = 0;
	if (!s)
		return (NULL);
	ptr = (char **)malloc((cnter(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			ptr[x] = ft_substr(s, 0, words(s, c));
			if (!ptr[x])
				return (ft_fr(ptr, x));
			s += words(s, c);
			x++;
		}
		else
			s++;
	}
	ptr[x] = NULL;
	return (ptr);
}
