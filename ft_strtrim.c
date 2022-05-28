/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:43:09 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/28 20:58:04 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* use strrchr to find the set in trim
Then create memory with length of s1 minus twice set lenght plus 1
Use strsub to extract the ref from the string and a reverse of it starting
with the end of the string for extracting the first part*/

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
char	*s1trimed;

if (ft_strrchr(s1, (int)*set))
{
	s1trimed = (char	*)malloc(ft_strlen(s1) - (ft_strlen(set) * 2) + 1);
	if (!s1trimed)
		return (NULL);
	return (s1trimed);
}


return(0);
}

/* 
s1: The string to be trimmed.
set: The reference set of characters to trim.
Return value The trimmed string. NULL if the allocation fails.
External functs. malloc
Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/
