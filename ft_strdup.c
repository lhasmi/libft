/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:42 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/12 15:54:26 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*allocates sufficient memory for a copy of the string s1, does the copy, and
    //returns a pointer to it.
    //The pointer may subsequently be used as an argument to the function
    free(3).

    //If insufficient memory is available, NULL is returned and errno
		set to ENOMEM.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	i;

	result = malloc ((ft_strlen(s1) + 1) * sizeof (char));
	if (result == (NULL))
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include<stdio.h>
// #include<string.h>
// #include <assert.h>
// #include <stdlib.h>

// int	main()
// {
// 	const char *s1 = "Halli Hallo";
// 	const char *s2 = "Keine Entwicklung ohne Leiden!";
//     printf("strdup\t\t= %s\n", strdup(s1));
//     printf("ft_strdup\t= %s\n", ft_strdup(s1));
//     printf("strdup\t\t= %s\n", strdup(s2));
//     printf("ft_strdup\t= %s\n", ft_strdup(s2));

// }
