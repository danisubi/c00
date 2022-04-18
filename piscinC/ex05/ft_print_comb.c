/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:25:29 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/07 23:00:09 by dsubiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
	{
		write (1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = 48;
	d = c + 1;
	u = d + 1;
	while (c <= 57)
	{
		d = c + 1;
		while (d <= 57)
		{
			u = d + 1;
			while (u <= 57)
			{
				ft_write (c, d, u);
				u++;
			}
			d++;
		}
	c++;
	}
}
/*
int main ()
{
	ft_print_comb();
} */
