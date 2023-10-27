/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:30:41 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:26:32 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

int	ft_itoa1(long long n, char *p, int flag)
{
	int	k;

	if (n < 10)
	{
		k = 0;
		if (flag == 1)
		{
			p[k++] = '-';
		}
		p[k] = n + '0';
		return (k + 1);
	}
	else
	{
		k = 0;
		k = ft_itoa1(n / 10, p, flag);
		p[k++] = n % 10 + '0';
		return (k);
	}
}

int	ketasize(long long n)
{
	int	keta_size;

	keta_size = 0;
	while (n > 0)
	{
		n = n / 10;
		keta_size++;
	}
	return (keta_size);
}

char	*ft_itoa(int n)
{
	int			keta_size;
	long long	n1;
	char		*p;
	int			i;
	long long	n2;
	int			flag;

	flag = 0;
	n1 = (long long)n;
	if (n1 < (long long)0)
	{
		n1 = -1 * n1;
		flag = 1;
	}
	n2 = n1;
	keta_size = ketasize(n1);
	p = (char *)malloc(sizeof(char) * keta_size);
	i = ft_itoa1(n2, p, flag);
	p[i] = '\0';
	return (p);
}

// #include "stdio.h"
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(-1));
// 	printf("%s\n", ft_itoa(10));
// 	printf("%s\n", ft_itoa(-10));

// 	return (0);
// }