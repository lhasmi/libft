/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:46:45 by lhasmi            #+#    #+#             */
/*   Updated: 2022/04/08 15:48:59 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_isalnum(int c)
{
    if (ft_isdigit(c) || ft_isalpha(c))
        return (1);
    return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
    printf("%d\n", isalnum('0'));
    printf("%d\n", ft_isalnum('0'));
}*/
