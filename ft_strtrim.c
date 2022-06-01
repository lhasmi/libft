/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:43:09 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/01 15:52:10 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include"libft.h"

char	*stralloc (char	*s1, size_t	len)
{
	char	*s1trimed;

	s1trimed = (char	*)malloc(len + 1);
	if (!s1trimed)
		return (NULL);
	s1trimed = ft_memcpy(s1trimed, s1, len);
	return (s1trimed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
size_t	s1len2;
size_t	i;

while (*s1 != '\0')
{
	if (ft_strchr(set, *s1))
		s1++;
	else
		break;
}
s1len2 = ft_strlen(s1);
i = s1len2;
while (*s1 != '\0' && ft_strchr(set, *(s1 + i)) != NULL)
	i--;
if(i < s1len2)
	return (stralloc (s1, i + 1));
else
	return (stralloc (s1, s1len2));
}

// int main()
// {
// 	char	*s1 = "   xxx   xxx";
// 	//char	*s2 = "Hello \t  Please\n Trim me !";
// 	char	*set = " x";
// 	char	*returnval = ft_strtrim(s1, set);

// 	printf("Ret: %s\n", returnval);
// 	// char buffer2[1000] = "there is no stars in the sky";
// 	// size_t ret2 = ft_strlcat(buffer2, str, strlen(str) + 4);
// 	// printf("Ret: %zu, buffer: %s\n", ret2, buffer2);
// }