/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:16:13 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/23 21:57:18 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_strlen(char const *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	check(char s1, char const *set)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (set[j] != '\0')
	{
		if (s1 == set[j])
		{
			k++;
		}
		j++;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	int		i;
	int		p;

	p = 0;
	t = malloc(sizeof(char *) * (ft_strlen(s1) + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		if (check(s1[i], set) == 0)
		{
			t[p] = s1[i];
			p++;
		}
		i++;
	}
	t[i] = '\0';
	return (t);
}

// #include <stdio.h>
// #include <string.h>

// // ft_strtrim関数のプロトタイプ

// int	main(void)
// {
// 	int		num_tests;
// 	char	*result;

// 	// テストケースの定義
// 	char *tests[][2] = {{"Hello World!", "H!"}, {"!!!Hello World!!!", "!"},
// 		{"Hello! World!", "!"}, {"Hello World", "!"}, {"", "!"}, {"!!!!!", "!"},
// 		{"!@#Hello World#@!", "!@#"}};
// 	// 期待される出力
// 	char *expected[] = {"ello World", "Hello World", "Hello! World",
// 		"Hello World", "", "", "Hello World"};
// 	// 各テストケースを実行
// 	num_tests = sizeof(tests) / sizeof(tests[0]);
// 	for (int i = 0; i < num_tests; i++)
// 	{
// 		result = ft_strtrim(tests[i][0], tests[i][1]);
// 		printf("Test %d: \"%s\", \"%s\" -> \"%s\"\n", i + 1, tests[i][0],
// 			tests[i][1], result);
// 		if (strcmp(result, expected[i]) == 0)
// 			printf("OK\n");
// 		else
// 			printf("NG\n");
// 	}
// 	return (0);
// }
