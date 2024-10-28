/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osslakri <osslakri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:25:32 by osslakri          #+#    #+#             */
/*   Updated: 2023/12/05 12:11:16 by osslakri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dt, const void *sc, size_t ln)
{
	if (dt > sc)
	{
		while (ln-- > 0)
			*(char *)(dt + ln) = *(char *)(sc + ln);
	}
	else
		ft_memcpy(dt, sc, ln);
	return (dt);
}
