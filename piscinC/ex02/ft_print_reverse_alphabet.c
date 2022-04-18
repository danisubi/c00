/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:00:16 by dsubiran          #+#    #+#             */
/*   Updated: 2022/04/07 17:28:50 by dsubiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char z)
{
	write (1, &z, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		ft_putchar(z);
		z--;
	}	
	ft_putchar('\n');
}

/*int main(){
ft_print_reverse_alphabet();
return(0);
}*/
