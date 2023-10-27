/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:35:42 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/09/20 14:17:02 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		size;
	size_t	j;
	size_t	max;

	i = ft_strlen(dst);
	if (dstsize == (size_t)0 || i >= dstsize)
	{
		return (ft_strlen((char *)src));
	}
	size = i + ft_strlen((char *)src);
	max = dstsize - i - 1;
	j = 0;
	while (src[j] != '\0' && j < max)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size);
}

