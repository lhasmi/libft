/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:07 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/21 19:52:01 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*locates the first occurrence of the null-terminated string   Characters that appear after a ‘\0’ character are not searched.
(a) the *hay==*nee compares the first character because it is where the loop is at, and we need then and the same moment to
	test if the whole characters of nee are identical to hay, and we need a loop for it, so eather we put a nested loop or
	we use the function that compares. If we put only the cmp f* it will compare the words at each iteration.
The function needs to use the variables we increment not the ones that are "const char *".
*/
#include"libft.h"


char	*ft_strnstr(const char * haystack, const char * needle, size_t len)
{
	size_t	nlen;
    size_t	hlen;
	char*	hay;
	char*	nee;

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
