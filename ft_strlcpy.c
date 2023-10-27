/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiyauch <rmiyauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:32:16 by rmiyauch          #+#    #+#             */
/*   Updated: 2023/10/18 14:02:10 by rmiyauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
	{
		return (ft_strlen((char *)src));
	}
	// srcからdestに、最大dstsize-1バイトコピーする。
	size_t i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0'; //最後にnullを入れる。
	return (ft_strlen((char *)src));
}


// int main(void){
// 	char *src = "Hello, world!";
// 	char *dest = "Hello, world!";
// 	size_t dstsize = 5;
// 	printf("src=%s\n", src);
// 	printf("dest=%s\n", dest);
// 	printf("dstsize=%zu\n", dstsize);
// 	printf("ft_strlcpy(dest, src, dstsize)=%zu\n", ft_strlcpy(dest, src, dstsize));
// 	printf("dest=%s\n", dest);
// 	return 0;
	
// }