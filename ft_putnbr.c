/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:49:11 by lhasmi            #+#    #+#             */
/*   Updated: 2022/02/16 20:25:48 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putnbr(8);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr / 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

/*
int	main  ()
{
	ft_putnbr(-2147483648);
}*/