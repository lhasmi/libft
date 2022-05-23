/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:46:45 by lhasmi            #+#    #+#             */
/*   Updated: 2022/05/21 21:54:16 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_isalnum(int c)
{
    if (ft_isdigit(c) || ft_isalpha(c))
        return (1);
    return (0);
}
