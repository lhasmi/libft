/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:47:05 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/08 20:16:06 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* test for ASCII character, which is any character within the octal 7-bit US-ASCII range.
#include <ctype.h>
*/
#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
