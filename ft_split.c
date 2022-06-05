/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:36 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/05 12:18:17 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include"libft.h"

#include<stdio.h>

char    **ft_split(char const *s, char c)
{
	size_t      count;
	size_t      temp;
	size_t      i;
	size_t      j;
	size_t      sindex;
	size_t      len;
	char        **strings;
	char        *buffer;
	size_t         temp2;

	temp2 = 0;
	len = ft_strlen(s);
	i = 0;
	count = 0;
	while (i < len)//in case no separator in s
	{
		while (i < len)
		{
			if (s[i] != c)//it gets out here
				break ;
			i++;
		}
		temp = i;//i stays 0
		while (i < len)
		{
			if (s[i] == c)
				break ;	
			i++;//		    then comes here
		}
		if (i > temp)//     i is indeed > 0 !
			count++; //     in case 12, count==1
		temp2 += (i - temp); //temp2 == i ==9 (chinimala)
	}
	printf("%zu\n", count);
	printf("%zu\n", temp2);
	strings = (char **)malloc(sizeof(char *) * (count + 1));//2 pointers size in the 1st dimension
	if (!strings)
		return (NULL);
	buffer = malloc(sizeof(char) * (temp2 + 1));//==9 bites length of substring 1, in case 12
	if (!buffer)
		return (NULL);
	sindex = 0;
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (s[i] != c)
				break ;
			i++;
		}
		j = 0;
		while (i < len)
		{
			if (s[i] == c)
				break ;
			buffer[j] = s[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			// printf("%zu\n", j);
			buffer[j] = '\0';
			strings[sindex] = malloc(ft_strlen(buffer));//+ 1?
			if (!strings)
				return (NULL);
			ft_memcpy(strings[sindex], buffer, (ft_strlen(buffer)));
			sindex++;
		}
	}
	free(buffer);
	strings[sindex] = NULL;
	return (strings);
}
// int main()
// {
// 	char    *s1 = "chinimala";
// 	//char  *s2 = "Hello \t  Please\n Trim me !";
// 	int count_strings = 13;
// 	char    set = ' ';
// 	char    **returnval = ft_split(s1, set);
// 	for (int i = 0; i < count_strings; i++)// print out the substrings, which should be each word of the sentence above
// 		printf("%s\n", returnval[i]);
// 	// if (returnval[0][1] == '\0')
// 	// printf("the is a null terminator\n");
// 	for (int i = 0; i < count_strings; i++)// free the dynamically allocated space for each string
// 		free(returnval[i]);
// 	free(returnval);// free the dynamically allocated space for the array of pointers to strings
// 	return 0;
// 	// char buffer2[1000] = "there is no stars in the sky";
// 	// size_t ret2 = ft_strlcat(buffer2, str, strlen(str) + 4);
// 	// printf("Ret: %zu, buffer: %s\n", ret2, buffer2);
// }