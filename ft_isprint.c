/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:14:08 by lhasmi            #+#    #+#             */
/*   Updated: 2022/03/28 15:33:10 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Tests if c is a printable character including the space.*/

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    	return (c);
	return (0);
}
