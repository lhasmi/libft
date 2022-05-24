/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:51 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/24 22:05:02 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
char	*newstr;
size_t	size;
// char*	str1;
// char*	str2;

// str1 = ((char *)s1);
// str2 = ((char *)s2);
// if (str1[0] == '\0')
// 	return (str2);
if (s1 == NULL && s2 == NULL)
	return(NULL);
size = ft_strlen(s1) + ft_strlen(s2) + 1;
newstr = malloc(sizeof(char) * size);
if (!newstr)
		return(NULL);
ft_strlcat(newstr, (char *)s1, ft_strlen(s1) + 1);
ft_strlcat(newstr, (char *)s2, size);
return(newstr);
}
