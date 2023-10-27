/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:24:11 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:29:47 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char	*check(int i, int j, char const *s)
{
	char	*t;
	int		p;

	t = (char *)malloc(sizeof(char) * (i - j + 1));
	p = 0;
	for (int k = j; k < i; k++)
	{
		t[p] = s[k];
		p++;
	}
	return (t);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**t;

	i = 0;
	j = 0;
	k = 0;
	t = malloc(sizeof(char **) * 100);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			t[k] = check(i, j, s);
			j = i + 1;
			k++;
		}
		i++;
	}
	t[k] = check(i, j, s);
	t[k + 1] = NULL;
	return (t);
}

// #include <stdio.h>
// #include <string.h>

// // ft_split関数のプロトタイプ
// char		**ft_split(char const *s, char c);

// int	main(void)
// {
// 		char *s;
// 		char c;
// 	int		num_tests;
// 	char	**result;
// 	int		j;

// 	// テストケースの定義
// 	struct	TestCase
// 	{
// 		char *expected[10]; // 10個までの出力を想定
// 	} tests[] = {{"Hello-World-This-is-OpenAI", '-', {"Hello", "World", "This",
// 		"is", "OpenAI"}}, {"", '-', {""}}, {"-Hello-World-", '-', {"", "Hello",
// 		"World", ""}}, {"Hello---World", '-', {"Hello", "", "", "World"}},
// 		{"HelloWorld", '-', {"HelloWorld"}}, {"apple,orange,banana", ',',
// 		{"apple", "orange", "banana"}}, {"-----", '-', {"", "", "", "", "",
// 		""}}};
// 	// 各テストケースを実行
// 	num_tests = sizeof(tests) / sizeof(tests[0]);
// 	for (int i = 0; i < num_tests; i++)
// 	{
// 		result = ft_split(tests[i].s, tests[i].c);
// 		printf("Test %d\nInput: \"%s\", Delimiter: '%c'\nExpected: [", i + 1,
// 			tests[i].s, tests[i].c);
// 		j = 0;
// 		while (tests[i].expected[j] && j < 9)
// 		{ // 最大10個までの出力を表示
// 			printf("\"%s\", ", tests[i].expected[j]);
// 			j++;
// 		}
// 		printf("]\nResult: [");
// 		j = 0;
// 		while (result[j] && j < 9)
// 		{ // 最大10個までの出力を表示
// 			printf("\"%s\", ", result[j]);
// 			free(result[j]); // 各文字列のメモリを解放
// 			j++;
// 		}
// 		printf("]\n\n");
// 		free(result); // 文字列配列のメモリを解放
// 	}
// 	return (0);
// }
