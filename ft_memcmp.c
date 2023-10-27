/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:44:06 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:26:45 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t		i;
	const char	*p;
	const char	*s;

	i = 0;
	p = (const char *)buf1;
	s = (const char *)buf2;
	while (i < n)
	{
		if (*s != *p)
		{
			return (int)(*p - *s);
		}
		s++;
		p++;
		i++;
	}
	return (0);
}

