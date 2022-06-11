/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:51 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/11 18:46:16 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	countn(int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*s;

	len = countn(n);
	s = malloc((sizeof (char) * len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		sign = 1;
	}
	else
		sign = 0;
	while (len--> sign)
	{
		if (n < 0)
			s[len] = '0' + n % 10 * (-1);
		else
			s[len] = '0' + n % 10;
		n = n / 10;
	}
	return (s);
}
