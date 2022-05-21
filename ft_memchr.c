/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:21 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/21 20:09:32 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
void * ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char	*)s;
	if (n == 0)
		return(NULL);
	i = 0;
	printf("str[%zu] = %s\n", i, &str[i]);
	while(str && i < n)
	{
		printf("entering the loop\n");
		if (str [i] == (unsigned char)c){
			printf("after c is found\n");
			return (str + i);
		}
		i++;
	}
	if (c == '\0')
		return (str + i); 
	return (0);
}
