/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:18 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/23 20:45:19 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//|| (len < ft_strlen(s) - start)
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
	char	*buffer;
	size_t	idxb;

	if (start > ft_strlen(s))
	{
		buffer = (char	*)malloc(1);
		if (!buffer)
			return (NULL);
		buffer [0] = '\0';
		return (buffer);
	}
	buffer = (char	*)malloc(len + 1);
	if (!buffer || !s)
		return (NULL);
	idxb = 0;
	while (idxb < len )
	{
		*(buffer + idxb) = *(s + (start));
		idxb++;
		s++;
	}
	*(buffer + idxb) = '\0';
	return(buffer);
}
