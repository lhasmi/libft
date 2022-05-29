/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:43:09 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/29 21:23:34 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. I will use strnstr to find the set in the string and
//	 then if *string == the return value of the strnstr.
//	 to say if the first position of the string equals the first position of set
// 2. because i must verify set given by user is at beginning and the end of s
// 3. then i must proceed to the mem allocation of the "trimdsubstring"

// 4. then I give the value to the created memory by
// 		substr with the start argument being the *(set+ (setlen - 1))
// 5. this will extract the substring after the set at the beginning
// 6. then for the last part....
// 7. I use strnstr to find and extract the part before from the trimdsubstring,
// yes because the limitating factor will be the len in strnstr , that will give only what is found from the begining
// this pseudocode is not adapted to the fact the characters of the set have to be removed one by one as long as they are next to each other.
//
#include <string.h>
#include <stdio.h>
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
//char	*s1trimed;
size_t	setlen;
size_t	s1len;
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
printf(" substring: %s\n", s1);
i = s1len;
while (s1 && i > 0)
{
	printf("entersecondloop\n");
	if (ft_strchr(set, *(s1 + i -1)))
		s1++;
	i--;
}
printf(" substring2: %s\n", s1);
return ((char *)s1);
}
// allocate memory after the seconde loop
int main()
{
	char	*s1 = "x   xxxtripouillexx";
	//char	*s2 = "Hello \t  Please\n Trim me !";
	char	*set = " x";
	char	*ret = ft_strtrim(s1, set);

	printf("Ret: %s\n", ret);
	// char buffer2[1000] = "there is no stars in the sky";
	// size_t ret2 = ft_strlcat(buffer2, str, strlen(str) + 4);
	// printf("Ret: %zu, buffer: %s\n", ret2, buffer2);
}
