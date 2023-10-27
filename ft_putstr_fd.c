/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:16:17 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/27 17:29:33 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &(s[i]), 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *s = "hello";
// 	ft_putstr_fd(s, 1);
// 	return (0);
// }