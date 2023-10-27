/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:29:42 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:26:49 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = buf1;
	p2 = buf2;
	while (n > 0 && *p1 != '\0')
	{
		*p1++ = *p2++;
		n--;
	}
	return (buf1);
}
