/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:43:09 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/31 15:59:26 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
char	*s1trimed;
size_t	setlen;
size_t	s1len;
size_t	s1len2;
size_t	i;

setlen = ft_strlen(set);
s1len = ft_strlen(s1);
i = 0;
while (s1 && i <= s1len)
{
	if (ft_strchr(set, *(s1 + i))){
		printf(" substring at each itteration inside if: %s\n", s1);
		s1++;
	}
	printf(" i in 1stloop: %zu\n", i);
	printf(" substring at each itteration after if: %s\n", s1);
	i++;
}
printf(" substring afterfirstloop: %s\n", s1);//until here the beginning is not trimmed totally if the end is absent
s1len2 = ft_strlen(s1);
i = s1len2;
while (*s1 != '\0' && ft_strchr(set, *(s1 + i)) != NULL)
	i--;
printf(" i after2ndloop: %zu\n", i);
printf(" substring after2ndloop: %s\n", s1);
if(i < s1len2)
{
	s1trimed = (char	*)malloc(i + 2);
	if (!s1trimed)
		return (NULL);
	s1trimed = ft_memcpy(s1trimed, s1, i + 1);
	printf(" substring after: %s\n", s1trimed);
	return (s1trimed);
}
else
	return((char	*)s1);
}

int main()
{
	char	*s1 = "x   xxxtripouille";
	//char	*s2 = "Hello \t  Please\n Trim me !";
	char	*set = "x ";
	char	*returnval = ft_strtrim(s1, set);

	printf("Ret: %s\n", returnval);
	// char buffer2[1000] = "there is no stars in the sky";
	// size_t ret2 = ft_strlcat(buffer2, str, strlen(str) + 4);
	// printf("Ret: %zu, buffer: %s\n", ret2, buffer2);
}

