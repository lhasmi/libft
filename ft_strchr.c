/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:32:52 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/27 22:38:26 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
	}
	if (c == '\0')
			return ((char *)&s[i]);
	return (0);
}
// #include<string.h>
// #include<stdio.h>
// int main()
// {
//     printf("%s\n", ft_strchr("abcdefghijklmnopqrstuvwxyz0123456789", 0));
// }
