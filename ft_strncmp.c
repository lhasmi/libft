/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:46:14 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/11 19:39:44 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0 ;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] > s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i ++;
	}
	return (0);
}
/*
#include<stdio.h>

int	main()
{
	//ft_strncmp(haystack, needle, llen) == 0
	printf("%d", ft_strncmp("Hello", "Hello1", 6));
	printf("\n%d", ft_strncmp("Hello", "He", 2));//0 same
	printf("\n%d", ft_strncmp("He", "Hallo", 2));// 1
	printf("\n%d\n", ft_strncmp("Hello", "Hello", 1));
	printf("%d\n", ft_strncmp("Hello", "Hello", 0));
}*/
