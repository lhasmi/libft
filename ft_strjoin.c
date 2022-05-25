/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:51 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/25 21:54:55 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*compare (char const *s1, char const *s2)
{
	char	*buffer;

	if (s1[0] == '\0' && s2[0] != '\0')
	{
		buffer = (char	*)malloc(strlen("") + strlen(s2) + 1);
		if (!buffer)
			return (NULL);
		ft_memcpy(buffer, (char	*)s2, ft_strlen(s2) + 1);
		return (buffer);
	}
	else if (s2[0] == '\0' && s1[0] != '\0')
	{
		buffer = (char	*)malloc(strlen("") + strlen(s1) + 1);
		if (!buffer)
			return (NULL);
		ft_memcpy(buffer, (char	*)s1, ft_strlen(s1) + 1);
		return (buffer);
	}
	else if (s1[0] == '\0' && s2[0] == '\0')
	{
		buffer = (char	*)malloc(strlen("") + strlen("") + 1);
		if (!buffer)
			return (NULL);
		buffer [0] = '\0';
		return (buffer);
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
char	*newstr;
size_t	size;

compare (s1, s2);
if (s2[0] != '\0' && s1[0] != '\0')
{
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = malloc(sizeof(char) * size);
	if (!newstr)
			return(NULL);
	ft_memcpy(newstr, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(newstr, (char *)s2, size);
	return(newstr);
}
}
