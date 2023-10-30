/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:28:19 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/30 15:29:44 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0 && p)
	{
		*p++ = 0;
		n--;
	}
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(void){
// // char *str="Hello World!";文字列リテラルは書き換え不可
// // char *str2="Hello World!";文字列リテラルは書き換え不可

// char *str = (char*)malloc(13); // 12 characters + null terminator
// strcpy(str, "Hello World!");
// char *str2 = (char*)malloc(13); // 12 characters + null terminator
// strcpy(str2, "Hello World!");

// 	ft_bzero((void*)str, 8);
// 	bzero((void*)str2, 8);
// 	printf("ft_bzero: %s\n", str);
// 	printf("bzero: %s\n", str2);
// 	free(str);
// 	free(str2);
// 	return (0);
// }