/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:21 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/10 21:18:31 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*locates the first occurrence of c (converted to an unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located,
	 or NULL
     if no such byte exists within n bytes.

	 1- check if s is null
	 2- type casting c to unsigned character
	 3- go trough the s and if s[i] == c
	 4- return the pointer s+i
*/
#include"libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	char	*str;

	str = (char	*)s;
	i = 0;
	while(str[i] && i < n)
	{
		if (str[i] == (char )c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
        return (&str[i]); //char *ptr4 = &a[6];  // Points to the 'w' of "world"
    return (0);
}
