/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:52:09 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/09/16 15:52:40 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "unistd.h"
#include "libft.h"


char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s1);
	p = malloc(len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_memcpy(p, s1, len);
	p[len] = '\0';
	return (p);
}