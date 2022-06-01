/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:07 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/01 12:53:40 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	char	*s;

	s = ((char *)b);
	while (len > 0)
	{
		s[len -1] = c;
		len --;
	}
	return (b);
}

/*#include<stdio.h>
#include <string.h>

int main()
{
    char str[] = "what is puts?";
    ft_memset(str+8, '_', 4);
	printf("\nAfter memset(): %s\n", str);
}*/
