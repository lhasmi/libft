/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:52:08 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/31 16:05:30 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FILE
# define HEADER_FILE

# include <unistd.h>
# include <stdlib.h>

/*Testing characters functions */
int		ft_isalpha(int a);
int		ft_isdigit(int d);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);

/*String functions:*/
size_t	ft_strlen(const char	*s);
//return pointer to first occurrence of int c in const char *s or NULL if not present.
char	*ft_strchr(const char	*s,int  c);
//locates the first occurrence of c (converted to a char) in the string pointed to by s.
//‘\0’ is considered part of s; therefore if c is ‘\0’,functions locate the terminating ‘\0’.
//is identical to strchr(), except it locates the last occurrence of c.
char	*ft_strrchr(const char *s, int c);
//lexicographically compare the null-terminated strings s1 and s2. compares not more than n characters.  
//characters that appear after a ‘\0’ character are not compared.
int		ft_strncmp(const char * s1, const char * s2, size_t n);
//locates the first occurrence of the null-terminated string. Characters appear after‘\0’ not searched.
char	*ft_strnstr(const char * haystack, const char * needle, size_t len);
// copy strings  take the full size of the destination buffer and guarantee NUL-termination if there is
// room. Room for the NUL should be included in dstsize. copies up to dstsize - 1 characters from the string 
//src to dst, NUL-terminating the result if dstsize is not 0.
size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize);
// Appends string src to the end of dst. takes the full size of the destination buffer and guarantee NUL-termination if there is room.  Room for the 
//NUL should be included in dstsize.  It will append at most dstsize - strlen(dst) - 1 characters. 
//then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize 
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize);
//allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.
char *	ft_strdup(const char *s1);

/*Memory functions:*/
//writes len bytes of value c (converted to an unsigned char) to the string b.
void	*ft_memset(void *b, int c, size_t len);
//writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n);
// copy n characters from src to dst, and return dst.
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
//copies len bytes from src to dst.  The two may overlap; the copy is always done
//in a nondestructive manner.
void	*ft_memmove(void *dst, const void *src, size_t len);
//locates first occurrence of c (converted to an unsigned char)in string s.
void	*ft_memchr(const void *s, int c, size_t n);
//compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//allocates space for count objects ( 4 int or 4 char) that are size bytes of memory each : 
//(sizeof) int oder sizeof (char)
void	*ft_calloc(size_t count, size_t size);
///////////
/*Part 2:*/
// Allocates (with malloc) and returns a substring from the string ’s’. Substring begins at index ’start’
// and is of maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len);
//Allocates (use malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2
char	*ft_strjoin(char const *s1, char const *s2);
//Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from Beg and the end
char	*ft_strtrim(char const *s1, char const *set);
#endif
