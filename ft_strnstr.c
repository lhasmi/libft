/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:07 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/21 00:35:16 by lailah           ###   ########.fr       */
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
	size_t	i;
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


/*#include <stdio.h>
#include <string.h>

int main()
{
    const char    *str0;
    const char    *str1;
    const char    *str2;
    // char    *str3;
    // char    *str4;
    // char    *str5;
    // char    *str6;
    // char    *str7;
    // char    *str8;
    // char    *str9;
    str0 = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
    str1 = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
    str2 = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
    // str3 = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
    // str4 = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
    // str5 = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30);
    // str6 = ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
    // str7 = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);
    // str8 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
    // str9 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);

// const char	hay[100] = "lorem ipsum dolor sit amet";
// const char	hay1[100]= "lorem ipsum dolor sit amet";
// const char	nee[100]= "HZ";
// const char	nee1[110]= "HZ";
// size_t	len = strlen(nee);
// size_t	len1 = strlen(nee1);
// size_t	len = strlen(hay);
// size_t	len1 = strlen(hay1);
// size_t	len = '2';
// size_t	len1 = '3';
// size_t	len = strlen(nee);
// size_t	len = strlen(nee);
// size_t	len = strlen(nee);
// size_t	len = strlen(nee);
// size_t	len = strlen(nee);
// size_t	len = strlen(nee);
    printf("pointer to nee trough ft_strnstr: %p\n", str0);
    printf("pointer to nee trough strnstr : %p\n", str0);
    printf("pointer to nee trough ft_strnstr : %p\n", str1);
    printf("pointer to nee trough strnstr : %p\n", str1);
    printf("pointer to nee trough ft_strnstr : %p\n", str2);
    printf("pointer to nee trough strnstr : %p\n", str2);
    // printf("pointer to nee trough strnstr : %p, the needle is:  %s\n", str3, str3 );
    // printf("pointer to nee trough strnstr : %p, the needle is:  %s\n", str4, str4 );
    // printf("pointer to nee trough strnstr : %p, the needle is:  %s\n", str5, str5);
    // printf("pointer to nee trough strnstr : %p, the needle is:  %s\n", str6, str6);
    // printf("pointer to nee trough strnstr : %p, the needle is:  %s\n", str7, str7);
    // printf("pointer to nee trough strnstr : %p, the needle is:  %s\n", str8, str8);
    // printf("pointer to nee trough strnstr : %p, the needle is:  %s\n", str9, str9);
}*/

/*
Strnstr

Localise la premiere apparition (pointer) du string nee dans le string Hay.

Seulement le nombre Len de characters est cherché

Le loop dois sárreter dans le \0

If : needle[0]=\0 return *Hay
If trouvé : return &nee[i]
else  return NULL


Cases to handle are:

char *s1 = "see FF your FF return FF now FF";
           Nee char    *s2 = "FF";
            size_t  max = strlen(s1);

pointer to nee trough ft_strnstr: 0x0, the needle is:  (null)
pointer to nee trough strnstr : 0x0, the needle is:  (null)
—————————
char *s1 = "FF";
            char    *s2 = "see F your F return F now F";
            size_t  max = strlen(s2);

pointer to nee trough ft_strnstr: 0x0, the needle is:  (null)
pointer to nee trough strnstr : 0x0, the needle is:  (null)
———————————
char *s1 = "MZIRIBMZIRIBMZE123";
            char    *s2 = "MZIRIBMZE";
            size_t  max = strlen(s2);

pointer to nee trough ft_strnstr: 0x7ffee44ec866, the function returns:  MZIRIBMZE123
pointer to nee trough strnstr : 0x0, thefunction returns:  (null)


pointer to nee trough ft_strnstr: 0x7ff7b5407620, the needle is:  MZIRIBMZE
pointer to nee trough strnstr : 0x0, the needle is:  MZIRIBMZE
——————————————
char *big = "abcdef";
            char *little = "abcdefghijklmnop";
            size_t  max = strlen(big);

pointer to nee trough ft_strnstr: 0x7ffee3d43860, the needle is:  abcdef
pointer to nee trough strnstr : 0x0, the needle is:  (null)
*/
