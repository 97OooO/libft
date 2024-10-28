/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:27:56 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/05 12:10:08 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		cnt++;
	}
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static void	ft_cond1(int len, int n, char *newstr)
{
	while (0 <= len)
	{
		newstr[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
}

static void	ft_cond2(int len, int n, char *newstr)
{
	while (1 <= len)
	{
		newstr[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*newstr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count_digit(n);
	newstr = (char *)malloc((ft_count_digit(n) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	newstr[len] = '\0';
	len--;
	if (n < 0)
	{
		newstr[0] = '-';
		n *= -1;
		ft_cond2(len, n, newstr);
	}
	else
		ft_cond1(len, n, newstr);
	return (newstr);
}
