/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:07 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/12 13:14:21 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	hlen;
	char	*hay;
	char	*nee;

	hay = ((char *)haystack);
	nee = ((char *)needle);
	nlen = ft_strlen(nee);
	hlen = ft_strlen(hay);
	if (nee[0] == '\0')
		return (hay);
	if (hlen < nlen || len < nlen)
		return (0);
	while (hay && len)
	{
		if (!ft_strncmp((const char *)hay, (const char *)nee, nlen))
		{
			if (len >= nlen)
				return (hay);
		}
	hay++;
	len--;
	}
	return (NULL);
}
