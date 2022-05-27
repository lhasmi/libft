/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:18 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/27 20:23:40 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
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
