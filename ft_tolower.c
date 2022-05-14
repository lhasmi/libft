/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:28 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/08 21:48:36 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -- upper case to lower case letter conversion*/
#include "libft.h"

int	ft_tolower(int c)
{
	int	low;

	if (c >= 'A' && c <= 'Z')
	{
		low = c + 32;
		return (low);
	}
	else
	{
		return (c);
	}
}
