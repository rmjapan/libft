/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:45:01 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/09/20 14:31:02 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= len)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

/*

#include <stdio.h>
#include <string.h>


int	main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "world";
	char str3[] = "foo";
	char str4[] = "Hello, world!";
	char str5[] = "world";
	char str6[] = "foo";
	printf("%s:", ft_strnstr(str1, str2, sizeof(str1))); // world!
	printf("%s\n", strnstr(str1, str2, sizeof(str1)));    // world!
	printf("%s", ft_strnstr(str1, str3, sizeof(str1))); // (null)
	printf("%s\n", strnstr(str1, str3, sizeof(str1)));    // (null)
	printf("%s", ft_strnstr(str4, str5, sizeof(str4))); // world!
	printf("%s\n", strnstr(str4, str5, sizeof(str4)));    // world!
	printf("%s", ft_strnstr(str4, str6, sizeof(str4))); // (null)
	printf("%s\n", strnstr(str4, str6, sizeof(str4)));    // (null)
	return (0);
}
*/
