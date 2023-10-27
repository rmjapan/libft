/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:56:18 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:33:14 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*fr_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;

	char *t, *t1;
	t = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	t1 = t;
	i = 0;
	while (s1[i] != '\0')
	{
		*t++ = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		*t++ = s2[j];
		j++;
	}
	*t = '\0';
	return (t1);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char	*fr_strjoin(char const *s1, char const *s2);

// void	test_ft_strjoin(char const *s1, char const *s2, char const *expected)
// {
// 	char	*result;

// 	result = fr_strjoin(s1, s2);
// 	printf("result=%s\n", result);
// 	if (strcmp(result, expected) == 0)
// 		printf("PASS: ft_strjoin(\"%s\", \"%s\") -> \"%s\"\n", s1, s2, result);
// 	else
// 		printf("FAIL: ft_strjoin(\"%s\", \"%s\") -> \"%s\" (expected \"%s\")\n",
// 			s1, s2, result, expected);
// 	free(result);
// }

// int	main(void)
// {
// 	test_ft_strjoin("", "", "");
// 	test_ft_strjoin("", "hello", "hello");
// 	test_ft_strjoin("world", "", "world");
// 	test_ft_strjoin("hello", "world", "helloworld");
// 	test_ft_strjoin("foo", "bar", "foobar");
// 	test_ft_strjoin("hello ", "world", "hello world");
// 	test_ft_strjoin("hello", " world", "hello world");
// 	test_ft_strjoin("hello", "  world", "hello  world");
// 	test_ft_strjoin("hello", "world\n", "helloworld\n");
// 	test_ft_strjoin("hello\n", "world", "hello\nworld");
// 	test_ft_strjoin("hello\n", "\nworld", "hello\n\nworld");
// 	return (0);
// }