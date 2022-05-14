/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:07 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/11 17:26:22 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*writes len bytes of value c (converted to an unsigned char) to the string b.
* returns its first argument.https://www.geeksforgeeks.org/c-program-to-insert-
	an-element-in-an-array/
//placing the int c inside of each index position.
// We decrement len and start the loop again*/
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
