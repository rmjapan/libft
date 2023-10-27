/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:26:57 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:27:13 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	count;

	unsigned char *p = str; /*型変換*/
	count = 0;
	while (*p != '\0' && (size_t)count < n)
	{
		*p++ = c;
		count++;
	}
	return (str);
}
