/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:36 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/11 16:37:31 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

static size_t	counting(char const *s, char c, size_t *temp2)
{
	size_t	i;
	size_t	temp;
	size_t	count;

	i = 0;
	count = 0;
	*temp2 = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		temp = i;
		while ((s[i] != c) && (i < ft_strlen(s)))
			i++;
		if (i > temp)
			count++;
		*temp2 += (i - temp);
	}
	return (count);
}

static char	**freesplit(char	**strings, char	*buffer)
{
	size_t		i;

	i = 0;
	while (strings[i] != NULL )
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	free(buffer);
	return (NULL);
}

static size_t	copysubstr(const char	*s, char	*buffer, char c, size_t *i)
{
	size_t		j;

	j = 0;
	while (s[*i] == c)
		(*i)++;
	j = 0;
	while ((s[*i] != c) && (*i < ft_strlen(s)))
	{
		buffer[j] = s[*i];
		(*i)++;
		j++;
	}
	if (j > 0)
		buffer[j] = '\0';
	return (j);
}

static char	**copylloc(const char	*s, char **strings, char	*buffer, char c)
{
	size_t		i;
	size_t		sindex;

	sindex = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (copysubstr (s, buffer, c, &i) > 0)
		{
			strings[sindex] = malloc(ft_strlen(buffer) + 1);
			if (!strings[sindex])
				return (freesplit(strings, buffer));
			ft_memcpy(strings[sindex], buffer, (ft_strlen(buffer) + 1));
			sindex++;
		}
	}
	free(buffer);
	strings[sindex] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char		**strings;
	char		*buffer;
	size_t		temp2;
	size_t		count;

	if (s == NULL)
		return (NULL);
	strings = (char **)malloc(sizeof(char *) * ((counting(s, c, &temp2)) + 1));
	count = ((counting(s, c, &temp2)) + 1);
	if (!strings)
		return (NULL);
	buffer = malloc((temp2 + 1));
	if (!buffer)
		return (NULL);
	return (copylloc(s, strings, buffer, c));
}

// int main()
// {
// 	char	*s1 = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	//char	*s2 = "Hello \t  Please\n Trim me !";
// 	char	set = ' ';
// 	char	**returnval;
// 	returnval = ft_split(s1, set);

// for (int i = 0; returnval[i]; i++)// print out the substrings, which should be each word of the sentence above
//     printf("%s\n", returnval[i]);
// for (int i = 0; returnval[i]; i++)// print out the substrings, which should be each word of the sentence above
//     free(returnval[i]);
//   free(returnval);// free the dynamically allocated space for the array of pointers to strings
// return 0;
// }