/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:43:09 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/31 09:30:48 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
//char	*s1trimed;
size_t	setlen;
size_t	s1len;
size_t	s1len2;
size_t	i;

setlen = ft_strlen(set);
s1len = ft_strlen(s1);
printf("%s\n", s1);
i = 0;
while (s1 && i < s1len)
{
	if (ft_strchr(set, *(s1 + i)))
		s1++;
	i++;
}
printf(" substring afterfirstloop: %s\n", s1);
s1len2 = ft_strlen(s1);
printf(" s1length afterfirstloop: %zu\n", s1len2);
i = 0;
while (s1)
{
	printf("entersecondloop\n");
	if (ft_strchr(set, *(s1 + i)) == NULL)
	{
		i++;
		printf(" substring inside 1st ifcondition: %s\n", s1);
		printf(" counter inside 1st ifcondition:: %zu\n", i);
		s1++;
	}
	if (ft_strchr(set, *(s1 + i)) != NULL)
		{
		printf(" substring inside 2nd ifcondition: %s\n", s1);
		break;	
		}
}
printf(" substring after2ndloop: %s\n", s1);
return ((char *)s1);
}
// allocate memory after the seconde loop
int main()
{
	char	*s1 = "x   xxxtripouillexx";
	//char	*s2 = "Hello \t  Please\n Trim me !";
	char	*set = " x";
	char	*returnval = ft_strtrim(s1, set);

	printf("Ret: %s\n", returnval);
	// char buffer2[1000] = "there is no stars in the sky";
	// size_t ret2 = ft_strlcat(buffer2, str, strlen(str) + 4);
	// printf("Ret: %zu, buffer: %s\n", ret2, buffer2);
}

