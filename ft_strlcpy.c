/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:52:22 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/12 17:08:20 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcpy() takes the full size of the destination buffer and
	guarantee NUL-termination if there is room.
	Note that room for the NUL should be included in dstsize.
strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.
strlcpy() returns total length of the string they tried to create= len of src.
*/
// src = "doorhandle"
//
size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	char	*dest;
	char	*srce;

	dest = ((char *)dst);
	srce = ((char *)src);
	if (!dst)
		return (ft_strlen(srce));
	if (dstsize == 0)
		return (ft_strlen(srce));
	i = 0;
	while ((srce[i] != '\0') && (i < dstsize - 1))
	{
		dest[i] = srce[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(srce));
}

/*#include <stdio.h>
#include <string.h>


int	main()
{
	// char buffer[100];
	char *heapBuffer = malloc(100 * sizeof(char));
	if (heapBuffer == NULL)
		exit(1);
	// lvalue = rvalue
	// Stack Data Structure
	// Heap
	// String literal (lvalue)
	// char *tmp = "lalala";
	// printf("%zu \n", ft_strlcpy(tmp, "houhou", 2));
	// printf("%s\n", tmp);
	// printf("%zu \n", ft_strlcpy(buffer, "houhou", 2));
	printf("%zu \n", ft_strlcpy(heapBuffer, NULL, 2));
	printf("%s\n", heapBuffer);
	free(heapBuffer);
	// printf("%lu \n", strlcpy("lalala", "houhou", 7));
	// printf("%zu \n", ft_strlcpy("", "houhou", 7));
	// printf("%lu \n", strlcpy("", "houhou", 7));
}
	// if (dstsize <= ft_strlen(srce))
	// 	// return length of src
	// 	return(ft_strlen(srce));*/
