/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:58:01 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/12 16:50:05 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// #include<stdio.h>
// #include<stdio.h>

// int main()
// {

//     int n = 3;
//     void *array;

//     char *v = "ABC";
//     array = &v;

//     write(1, v, 3);
//     write(1, "\n", 1);

//     ft_bzero(array, n);

//     write(1, array, 3);
//     write(1, "\n", 1);
// }
