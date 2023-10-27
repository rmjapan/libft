/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:01:53 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:29:26 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "unistd.h"
#include "libft.h"

int	ft_putnbr_fd2(long long n, int fd, char *s)
{
	int	k;

	k = 0;
	if (n < 10)
	{
		s[k++] = n + '0';
		return (k);
	}
	else
	{
		k = ft_putnbr_fd2(n / 10, fd, s);
		s[k++] = n % 10 + '0';
		return (k);
	}
}

int	size_keta(long long int p)
{
	int	size;

	size = 0;
	while (p > 0)
	{
		p = p / 10;
		size++;
	}
	return (size);
}

void	ft_putnbr_fd(int n, int fd)
{
	int				size;
	char			*s;
	int				i;
	long long int	p;

	p = n;
	if (p < 0)
	{
		write(fd, "-", 1);
		p = -p;
	}
	size = size_keta(p);
	s = malloc(sizeof(char) * size + 1);
	size = ft_putnbr_fd2(p, fd, s);
	s[size] = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	int	n;

// 	n = -2147483648;
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);
// 	n = 2147483647;
// 	ft_putnbr_fd(n, 1);
// 	return (0);
// }
