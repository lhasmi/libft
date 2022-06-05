/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:28 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/01 16:07:56 by lailah           ###   ########.fr       */
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
		return (c);
}
