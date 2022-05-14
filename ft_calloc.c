/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:46:41 by lhasmi            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/14 18:26:56 by lhasmi           ###   ########.fr       */
=======
/*   Updated: 2022/04/14 18:44:40 by lhasmi           ###   ########.fr       */
>>>>>>> a861b2978fdc40d174d1e828850a53cd46ae3c4d
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if ((count >= SIZE_MAX) || (size >= SIZE_MAX))
		return (NULL);
	s = malloc(count * size);
	if (s == (NULL))
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
