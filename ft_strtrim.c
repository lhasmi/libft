/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:43:09 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/29 13:25:58 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. I will use strnstr to find the set in the string and 
//	 then if *string == the return value of the strnstr. 
//	 to say if the first position of the string equals the first position of set
// 2. because i must verify set given by user is at beginning and the end of s
// 3. then i must proceed to the mem allocation of the "trimdsubstring"
// 4. then I give the value to the created memory by 
// 		substr with the start argument being the *set+ strlen(set)
// 5. this will extract the substring after the set at the beginning
// 6. then for the last part....
// 7.  I use strnstr to extract the part before from the trimdsubstring

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
char	*s1trimed;
char	*setfound;
int	setlen;
int	s1len;

setlen = ft_strlen(set);
s1len = ft_strlen(s1);
setfound = ft_strnstr(s1, set, s1len);
if (setfound)
{
	if(*s1 == *set && *(s1 + (s1len - 1)) == *(set + (setlen - 1)))
	{
		s1trimed = (char	*)malloc((s1len - (setlen * 2)) + 1);
		if (!s1trimed)
			return (NULL);
	}
	return (s1trimed);
}
return(0);
}
