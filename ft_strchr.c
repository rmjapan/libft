/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:39:46 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/11/01 11:45:56 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	size;

	i = 0;
	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	while (i <= size)
	{
		if (s[i] == ((char)(c)))
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
