/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:01:59 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/07 18:31:18 by dsubiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int nb);

void	check_min(int nb)
{	
	if (nb == -2147483648)
	{
		write(1, "2147483648", 11);
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		cnb;
	char	c;

	cnb = nb;
	i = 1;
	if (nb < 0)
	{
		write (1, &"-", 1);
		nb *= -1;
		cnb *= -1;
	}
	check_min(nb);
	while (cnb >= 10)
	{
		cnb /= 10;
		i *= 10;
	}
	while (i >= 1)
	{
		c = (nb / i) + '0';
		write (1, &c, 1);
		nb = nb % i;
		i /= 10;
	}
}
/*
int main ()
{
ft_putnbr(0);
}*/
