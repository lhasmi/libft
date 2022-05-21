/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:19:22 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/21 20:38:22 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	int counter;
	int i;

	str = ((char *)s);
	counter = ft_strlen (s);
	if (c == '\0')
		return (&str[counter]);
	i = counter - 1;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
    return (0);
}

