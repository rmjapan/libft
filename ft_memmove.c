/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:31:05 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:26:55 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	if (buf1 <= buf2)
	{
		p1 = buf1;
		p2 = buf2;
		while (n > 0)
		{
			*p1++ = *p2++;
			n--;
		}
	}
	else
	{
		p1 = buf1 + n - 1;
		p2 = buf2 + n - 1;
		while (n > 0)
		{
			*p1-- = *p2--;
			n--;
		}
	}
	return (buf1);
}
