/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:32:52 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/26 14:54:11 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char *ft_strchr(cs,c) return pointer to first occurrence of int c in const char *s or NULL if not present.
how to point to the index of a character in a string : https://stackoverflow.com/questions/15168771/pointer-to-a-string-in-c#15168795
*/

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
	{
        if (s[i] == (char)c)
        {
            return ((char *)&s[i]); //char *ptr4 = &a[6];  // Points to the 'w' of "world"
        }
        i++;
	}
    if (c == '\0')
            return ((char *)&s[i]);
    return (0);
}
// #include<string.h>
// #include<stdio.h>
// int main()
// {
//     printf("%s\n", ft_strchr("abcdefghijklmnopqrstuvwxyz0123456789", 0));
// }
