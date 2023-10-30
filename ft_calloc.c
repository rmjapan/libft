/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:50:59 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/30 14:02:20 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void			*p;
	size_t			count;
	int				c;
	unsigned char	*q;

	p = malloc(n * size + 1);
	count = 0;
	c = 0;
	q = p;
	while (count < n)
	{
		q[count] = c;
		count++;
	}
	*(q + count) = '\0';
	return (p);
}
