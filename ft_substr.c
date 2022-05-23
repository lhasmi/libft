/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:18 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/23 00:07:30 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at 
// index ’start’ and is of maximum size ’len’.
// 1. allocate memory to what? according to stackoverflow, should be a buffer to put the substring in. buffer = (char *)malloc(len + 1)
// 2. secure the allocation failure if s == 0 then return NULL
// 3. loop trough the s and copy starting from the position start into the buffer , buffer is the empty cup, 
//			s is the full cup. then return the buffer
// 4. put a ‘\0’ after the last position, just at the exit of the loop. at buffer + i.
// 5. free the buffer
// 6. pass it trough the test.|| (len < ft_strlen(s) - start)
//ft_substr	: 1.OK 2.MKO 3.OK 4.MOK 5.SIGSEGV
// char * s = ft_substr("tripouille", 0, 42000);
// 	/* 1 */ check(!strcmp(s, "tripouille"));
// 	/* 2 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();

// 	s = ft_substr("tripouille", 1, 1);
// 	/* 3 */ check(!strcmp(s, "r"));
// 	/* 4 */ mcheck(s, 2); free(s); showLeaks();

// 	s = ft_substr("tripouille", 100, 1);
// 	/* 5 */ check(!strcmp(s, ""));

// char	str[] = "lorem ipsum dolor sit amet";
// war ft_substr(str, 400, 20)

#include"libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	* buffer;
	size_t	idxb;
	if (start > ft_strlen(s))// start of substr after the s
	//means memory overflow WHY null terminator as substring?++++++++++
		return(0);
	buffer = (char	*)malloc(len +1);
	if (!buffer || !s)
		return (NULL);
	idxb = 0;
	while (idxb < len)
	{
		*(buffer + idxb) = *(s + (start)); 
		idxb++;
		s++;
	}
	*(buffer + idxb) = '\0';
	// free((void *)buffer);
	return(buffer);
}
