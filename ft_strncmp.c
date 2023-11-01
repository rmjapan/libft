/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:41:51 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/11/01 13:09:09 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*s;

	p = (unsigned char *)s1;
	s = (unsigned char *)s2;
	if (p == NULL || s == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		if (p[i] != s[i])
		{
			return (p[i] - s[i]);
		}
		i++;
	}
	return (0);
}
