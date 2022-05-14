/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:37 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/09 22:19:22 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -- lower case to upper case letter conversion*/
#include "libft.h"

int	ft_toupper(int c)
{
	int	up;

	if (c >= 97 && c <= 122)
	{
		up = c - 32;
		return (up);
	}
	return (c);
}
// #include <stdio.h>

// int main()
// {
// 	printf("%d\n",ft_toupper('h'));
// }
