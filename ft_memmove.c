/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:11 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/12 23:34:07 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <string.h>
#include <stdio.h>
// #define PRINT_HERE() (printf("%s file, %d line\n", __FILE__, __LINE__))
// #define LOG(x) (printf("%p\n", x))
// #define LOG2(y) (printf("%s\n", y))

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int	i;

	s = ((unsigned char *)src);
	d = ((unsigned char *)dst);
	if (!s && !d)
		return (0);
	if (src < dst)
	{
		i = (int)len -1;
		while (i >= 0 )
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int main()
// {
// 	char	s[50] = "abcde";

// 	//ft_memmove(s + 2, s, 3);
// 	memmove(s + 2, s, 3);
// 	printf("%s\n", s);
// 	//printf("%s\n", s);
// 	return (0);
// }
