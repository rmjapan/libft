/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:18:43 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/23 19:19:27 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &(s[i++]), 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
//     char *s = "hello";
//     ft_putendl_fd(s, 1);
//     char *s2 = "world";
//     ft_putendl_fd(s2, 1);
//     return (0);
// }
