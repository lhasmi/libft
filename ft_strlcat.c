/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:49:00 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/21 16:55:44 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	char	*srce;
	size_t	lendst;
	size_t	lensrc;
	// size_t	n;
	size_t	i;
	size_t	j;

	srce = ((char *)src);
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (!dst || dstsize == 0)
		return (lensrc);
	// if (src[0] == '\0' && (dstsize >= lendst))
	// printf("after condition test10\n");
	// 	return (lendst);
	// if (src[0] == '\0')
	// 	return (dstsize);
	printf("after condition src empty\n");
	i = lendst;
	j = 0;
	while (srce[j] && (i < dstsize -1))
	{
		dst[i] = srce[j];
		i++;
		j++;
	}
	if( dstsize >= lendst)
		dst[i] = '\0';
	if (dstsize < lendst)
		return (dstsize + lensrc);
	return (lendst + lensrc);
}


// #include <string.h>
// int main()
// {
// char dest[30]; 
// // int	destlen;
// memset(dest, 0, 30); memset(dest, '1', 10);
// printf("output of my ft_* is: %zu", ft_strlcat(dest, "", 15));
// }




// cat dog 10
// catdog\0 6 -> buffer[6] = '\0' if dstsize > dst + src

// cat dog 5
// catd\0 -> buffer[4] = '\0' if dstsize < dst + src
//////////LIBFTTESTER///////////////////////////////////////////////
// char dest[30]; memset(dest, 0, 30);
// char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
	
// memset(dest, 0, 30); memset(dest, '1', 10);
// /* 10 */ check(ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111")); showLeaks();
// memset(dest, 0, 30);
// /* 11 */ check(ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, "")); showLeaks();
// memset(dest, 0, 30);

// #include <string.h>
// int main()
// {
// 	char dest[30] = "WOOG";
// 	char * src = (char *)"AAAAAAAAA";
// 	// char src[20] = "abc";
// 	// size_t n = 5;
// 	// unsigned long test0;
// 	// unsigned long test1;
// 	// unsigned long test2;
// 	// unsigned long test3;
// 	// unsigned long test4;
// 	// unsigned long test;
// 	// unsigned long test5;
// 	// unsigned long test6;
// 	// printf("%s\n", ft_strncat(dest, src, n)); strlendest + strlensrc = 7
// 	// char dest0[20] = "";//!dest
// 	// char dest1[20] = "WOOG";//!src
// 	// char dest2[20] = "WOOG";//destsize == 0
// 	// char dest3[20] = "WOOG";//destsize < strlendest + strlensrc
// 	// char dest4[20] = "WOOG";//destsize = strlendest + strlensrc
// 	// char dest[3084] = "there is no stars in the sky";//all good
// 	// char src0[20] = "abc";//!dest
// 	// char src1[20] = "";//!src
// 	// char src2[20] = "abc";//no destsize
// 	// char src3[20] = "abc";//destsize < strlendest + strlensrc
// 	// char src4[20] = "abc";//destsize = strlendest + strlensrc
// 	// char src[3084] = "the cake is a lie !\0I'm hidden lol\r\n";//all good
// 	// test0 = ft_strlcat(dest0, src0, 10);
// 	// printf("len of returned dest if !dest: %lu, destination: %s\n", test0, dest0);

// 	// test1 = ft_strlcat(dest1, src1, 4);
// 	// printf("len of returned dest !src: %lu, destination: %s\n", test1, dest1);

// 	// test2 = ft_strlcat(dest2, src2, 0);
// 	// printf("destsize == 0: %lu, destination: %s\n", test2, dest2);

// 	// test3 = ft_strlcat(dest3, src3, 5);
// 	// printf("destsize < strlendest + strlensrc: %lu, destination: %s\n", test3, dest3);

// 	// test4 = ft_strlcat(dest4, src4, 7);
// 	// printf("destsize = strlendest + strlensrc: %lu, destination: %s\n", test4, dest4);

// 	// test = strlcat(dest, src, 100);
// 	// printf("len of returned dest: %lu, destination: %s\n", test, dest);
// }

/*
- prend la taille totale du buffer de destination (dstsize -1) car le dernier
byte est reserve a la \0, mais seulement si taille de dest plus taille de src est < dstsize
cette partie est la meme que strlcpy
- il attache (un max de : taille du buffer moins 1, moins taille de la dest) a la position i == strlendst
- il attache le \0 si: !dstsize || strlendst + strlensrc < dstsize (ou bien strlen de la dest change < dstsize)
- pour tester dans le main: strlcat et ft_strlcat avec tout les cas du tester doivent donner le meme output
- return value est strlendst(originale) + strlensrc
- it reste les questions suivantes:
	- si !dest => ?   len of returned dest if !dest: 3, destination:
	- si !src => ?    len of returned dest !src: 1, destination: WOOG
	- si !destsize => ?destsize == 0: 3, destination: WOOG
	- si destsize < strlendest + strlensrc ==> 7, destination: WOOG
	- si destsize = strlendest + strlensrc ==> 7, destination: WOOGab
	- si destsize < strlendest ==>?
	- Normal output ==> len of returned dest: 7, destination: WOOGabc
char	*s,
char	*p,
char	buf[BUFSIZ];

...

(void)strlcat(buf, p, sizeof(buf));*/


//len of returned dest: 7, destination: WOOGabc
/*
- prend la taille totale du buffer de destination (dstsize -1)
		car le dernier byte est reserve a la \0, mais seulement si taille de dest plus taille de src est < 			dstsize cette partie est la meme que strlcpy
- il attache à la position i == strlendst(un max de : taille du buffer moins 1, moins taille de la dest)
- il attache le \0 si: dstsize || strlendst < dstsize (ou bien strlen de la dest change < dstsize)
- pour tester dans le main: strlcat et ft_strlcat avec tout les cas du tester doivent donner le meme output
- return value est strlendst(originale) + strlensrc
- it reste les questions suivantes:
    - if !dest => ?   len of returned value: 3, destination:    (dstsize==0), 3…abc (dstsize ==10)

    - if !src => ?    returned value: 1, destination: WOOG (dstsize==1 < lendest), 4 …WOOG (dstsize >lendest || == lendest)

    - if destsize == 0: returned value: 3, destination: WOOG (dstsize==0)

    - if destsize < strlendest + strlensrc ==> 7, destination: WOOG (dstsize==5)

    - if destsize = strlendest + strlensrc ==> 7, destination: WOOGab (dstsize==7)

    - Normal output ==> len of returned dest: 7, destination: WOOGabc
char    *s,
char    *p,
char    buf[BUFSIZ];
...
(void)strlcat(buf, p, sizeof(buf));
 
OUTPUT strlcat:
————————
len of returned dest if !dest: 3, destination: abc
len of returned dest !src: 4, destination: WOOG
destsize == 0: 3, destination: WOOG
destsize < strlendest + strlensrc: 7, destination: WOOG
destsize = strlendest + strlensrc: 7, destination: WOOGab
len of returned dest: 7, destination: WOOGabc

OUTPUT ft_strlcat:
————————
len of returned dest if !dest: 3, destination: abc
len of returned dest !src: 4, destination: WOOG
destsize == 0: 3, destination: WOOG
destsize < strlendest + strlensrc: 7, destination: WOOG
destsize = strlendest + strlensrc: 7, destination: WOOGab
len of returned dest: 7, destination: WOOGabc

FALL source “the cake is a lie !\0I'm hidden lol\r\n”
Dest "there is no stars in the sky"
Destsize 33

OUTPUT strlcat:
————————
len of returned dest: 47, destination: there is no stars in the skythe

If dstsize == 70
len of returned dest: 47, destination: there is no stars in the skythe cake is a lie !
OUTPUT ft_strlcat:
————————-
len of returned dest: 47, destination: there is no stars in the skythe

If dstsize == 70
len of returned dest: 47, destination: there is no stars in the skythe cake is a lie !*/
