/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:15 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/12 16:33:23 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	char	*s;
	char	*d;

	s = ((char *)src);
	d = ((char *)dst);
	if (!s && !d)
		return (0);
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n --;
	}
	return ((void *)d);
}

// #include<stdio.h>
// #include <string.h>

// int main()
// {
// 	char	str1[] = "what is puts?";
// 	char	str2[] = "batata";
// 	ft_memcpy(str1, str2, 4);
// 	printf("\nAfter memcpy(): %s\n", str1);
// }
