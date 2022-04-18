/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:47:29 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/07 17:44:43 by dsubiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_print_numbers(void)
{
	char	a;

	a = '9';
	while (a >= '0')
	{
		ft_putchar(a);
		a--;
	}
}
/*int main()
{
	ft_print_numbers();
}*/
