/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:52:08 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/27 21:54:50 by lailah           ###   ########.fr       */
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
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char * s1, const char * s2, size_t n);
char	*ft_strnstr(const char * haystack, const char * needle, size_t len);
size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize);
char *	ft_strdup(const char *s1);

/*Memory functions:*/
//writes len bytes of value c (converted to an unsigned char) to the string b.
void	*ft_memset(void *b, int c, size_t len);
//writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n);
// copy n characters from src to dst, and return s.
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
//copies len bytes from src to dst.  The two may overlap; the copy is always done
//in a nondestructive manner.
void	*ft_memmove(void *dst, const void *src, size_t len);
//compare the first n characters of cs with ct; return as with strcmp.
void	*ft_memchr(const void *s, int c, size_t n);
//compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//allocates space for count objects ( 4 int or 4 char) that are size bytes
// of memory each : (sizeof) int oder sizeof (char)
void	*ft_calloc(size_t count, size_t size);

/*Part 2:*/
// Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at
// index ’start’ and is of maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
#endif
