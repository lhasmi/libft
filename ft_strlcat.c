/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:49:00 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/24 21:51:37 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	char	*srce;
	size_t	lendst;
	size_t	lensrc;
	// size_t	n;
	size_t	i;
	size_t	j;

	srce = ((char *)src);
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (!dst || dstsize == 0)
		return (lensrc);
	// if (src[0] == '\0' && (dstsize >= lendst))
	// printf("after condition test10\n");
	// 	return (lendst);
	// if (src[0] == '\0')
	// 	return (dstsize);
	//printf("after condition src empty\n");
	i = lendst;
	j = 0;
	while (srce[j] && (i < dstsize -1))
	{
		dst[i] = srce[j];
		i++;
		j++;
	}
	if (dstsize >= lendst)
		dst[i] = '\0';
	if (dstsize < lendst)
		return (dstsize + lensrc);
	return (lendst + lensrc);
}
