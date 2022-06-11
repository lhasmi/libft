/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:47 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/11 21:48:46 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return;
	i = -1;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}