/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:42:57 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:26:39 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	const char	*s;
	size_t			i;

	s = (const char *)buf;
	i = 0;
	while (i < n)
	{
		if (*s == ch)
		{
			return ((void *)s);
		}
		s++;
	}
	return (NULL);
}
