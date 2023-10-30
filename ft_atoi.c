/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:12:10 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/30 14:01:26 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     whitespaces(char *str, int *ptr_i)
{
        int     count;
        int     i;

        i = 0;
        count = 1;
        while ((*str >= 9 && str[i] <= 13) || str[i] == 32)
                i++;
        while (str[i] && (str[i] == 43 || str[i] == 45))
        {
                if (str[i] == 45)
                        count *= -1;
                i++;
        }
        *ptr_i = i;
        return (count);
}

int     ft_atoi(char *str)
{
        int     sign;
        int     result;
        int     i;

        result = 0;
        sign = whitespaces(str, &i);
        while (str[i] && str[i] >= 48 && str[i] <= 57)
        {
                result *= 10;
                result += str[i] - 48;
                i++;
        }
        result *= sign;
        return (result);
}

// #include <stdio.h>

// int ft_atoi(char *str);

// int main(void) {
//   char str1[] = "42";
//   char str2[] = "   -42";
//   char str3[] = "4193 with words";
//   char str4[] = "-+-a-987";
//   char str5[] = "-91283472332";

//   // Test Case 1: Normal Input
//   printf("Test Case 1: Normal Input\n");
//   printf("String: %s\n", str1);
//   printf("Result: %d\n", ft_atoi(str1)); // expected output: 42

//   // Test Case 2: Leading Whitespace and Negative Sign
//   printf("Test Case 2: Leading Whitespace and Negative Sign\n");
//   printf("String: %s\n", str2);
//   printf("Result: %d\n", ft_atoi(str2)); // expected output: -42

//   // Test Case 3: Numeric Characters Followed by Non-Numeric Characters
//   printf("Test Case 3: Numeric Characters Followed by Non-Numeric Chara\n");
//   printf("String: %s\n", str3);
//   printf("Result: %d\n", ft_atoi(str3)); // expected output: 4193

//   // Test Case 4: Non-Numeric Characters Followed by Numeric Characters
//   printf("Test Case 4: Non-Numeric Characters Followed by Numeric Chara\n");
//   printf("String: %s\n", str4);
//   printf("Result: %d\n", ft_atoi(str4)); // expected output: 0

//   // Test Case 5: Integer Overflow
//   printf("Test Case 5: Integer Overflow\n");
//   printf("String: %s\n", str5);
//   printf("Result: %d\n", ft_atoi(str5)); // expected output: -2147483648

//   return (0);
// }