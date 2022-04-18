/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:10:24 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/07 18:22:55 by dsubiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

void	ft_is_negative(int n)
{
	int	a;

	a = n;
	if (a < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
	ft_putchar('\n');
}
/*
int main()
{
	ft_is_negative(0);
}*/
