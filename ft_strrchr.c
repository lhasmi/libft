/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:19:22 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/26 14:55:14 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//char *strrchr(cs,c) return pointer to last occurrence of c in cs or NULL if not present.
/*the loop will run if location is c if it is equal to c as first occurence from the end of the
	string
	1-start the loop from the end : i=
	*/
#include "libft.h"


char *ft_strrchr(const char *s, int c)
{
	char *temp;
	int count;
	int i;

	temp = ((char *)s);
	count = ft_strlen (s);
	if (c == '\0')
		return (&temp[count]);
	i = count - 1;
	while (i >= 0)
	{
		if (temp[i] == c)
			return (temp + i);
		i--;
	}

    return (0);
}

// #include<stdio.h>
// int main()
// {
//     printf("%s\n", ft_strrchr("lailab", '\0'));
// }
