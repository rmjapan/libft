/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:56 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:30:52 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	count;

	t = malloc(sizeof(char *) * len);
	if (s == NULL || len == 0)
		return (NULL);
	count = 0;
	while (&s[start + count] != NULL && count < len)
	{
		t[count] = s[start + count];
		count++;
	}
	return ((char *)t);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char	*ft_substr(char const *s, unsigned int start, size_t len);

// void	test_ft_substr(char const *s, unsigned int start, size_t len,
//         char const *expected_result)
// {
//     char	*result;

//     result = ft_substr(s, start, len);
//     printf("result=%s\n", result);
//     if (result == NULL)
//         printf("result is NULL\n");
//     else if (strcmp(result, expected_result) == 0)
//         printf("PASS: ft_substr(\"%s\", %d, %zu) -> \"%s\"\n", s, start, len,
//             result);
//     else
//         printf("FAIL: ft_substr(\"%s\",
//	%d,%zu)	-> \"%s\" (expected \"%s\")\n",s, start, len,
//		result,expected_result);
//     free(result);
// }

// int	main(void)
// {
//     test_ft_substr("Hello, world!", 7, 5, "world");
//     test_ft_substr("Hello, world!", 0, 5, "Hello");
//     test_ft_substr("Hello, world!", 7, 100, "world!");
//     test_ft_substr("Hello, world!", 13, 5, "");
//     test_ft_substr("", 0, 5, "");
//     test_ft_substr(NULL, 0, 5, NULL);
//     return (0);
// }