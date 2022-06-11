/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:52:08 by lhasmi            #+#    #+#             */
/*   Updated: 2022/06/12 01:14:00 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
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
//return pointer to 1st occur int c in const char *s or NULL if unpresent.
char	*ft_strchr(const char	*s, int c);
//locates the first occurrence of c (converted tochar) in str pointed to by s.
//‘\0’ considered part of s; if c is ‘\0’,functions locate terminating ‘\0’.
//is identical to strchr(), except it locates the last occurrence of c.
char	*ft_strrchr(const char *s, int c);
//lexicographically compare null-terminated str s1 and s2. compares not
//more than n characters. chars that appear after a ‘\0’ chars not compared.
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//locates first occurrence of null-terminated str. Chars > ‘\0’ not searched.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
// copy strings  take the full size of the destbuffer and guarantee NUL-tif
// room.  the NULincluded in dstsize. copies up to dstsize - 1 chfroms
//src to dst, NUL-terminating the result if dstsize is not 0.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);

/*Memory functions:*/
//writes len bytes of value c (converted to an unsigned char) to the string b.
void	*ft_memset(void *b, int c, size_t len);
//writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n);
// copy n characters from src to dst, and return dst.
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
//copies len bytes from src to dst.  The two may overlap
//in a nondestructive manner.
void	*ft_memmove(void *dst, const void *src, size_t len);
//locates first occurrence of c (converted to an unsigned char)in string s.
void	*ft_memchr(const void *s, int c, size_t n);
//compares byte string s1 against byte string s2.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//allocates space for count objects are size bytes of memory each :
//(sizeof) int oder sizeof (char)
void	*ft_calloc(size_t count, size_t size);
///////////
/*Part 2:*/
// Allocates (with malloc) and returns a substring from the string ’s’.
//Substring begins at index ’start’
// and is of maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len);
//Allocates (use malloc) and returns a new string, which is the result
//of the concatenation of ’s1’ and ’s2
char	*ft_strjoin(char const *s1, char const *s2);
//Allocates and returns a copy of ’s1’ with the characters specified in
//’set’ removed from Beg and the end
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
//Allocates and returns a string representing integer received as argument.
//Negative numbers must be handled.
char	*ft_itoa(int n);
//Applies function ’f’ to each character of ’s’, passes its index as first
//(with malloc) resulting from successive applications of ’f’.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//Applies ’f’ on each character of s passed as argument, passes its index
// as first argument. Each character
//is passed by address to ’f’ to be modified if necessary.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
//Outputs the character ’c’ to the given file descriptor.
void	ft_putchar_fd(char c, int fd);
//Outputs the string ’s’ to the given file descriptor.
void	ft_putstr_fd(char *s, int fd);
//Outputs the string ’s’ to the given file descriptor followed by a newline.
void	ft_putendl_fd(char *s, int fd);
//Outputs the integer ’n’ to the given file descriptor.
void	ft_putnbr_fd(int n, int fd);
#endif
