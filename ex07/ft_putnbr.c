/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:34:30 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/14 15:34:32 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int n) // call ft_putchar function ex00
{
	write(1, &n,1);
}

void ft_putnbr(int nb) // init ft_putnbr function
{
	if (nb >= 0 && nb <= 10) {
		ft_putchar(nb + '0');
	}
	else if (nb < 0) {
		ft_putchar('-');
	}
	else {
		ft_putnbr(nb /10);
		ft_putnbr(nb %10);
	}
}
int main(void) // init main function
{
		ft_putnbr(42);
		return 0;		
}
