/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:34:30 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/15 15:23:31 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

int	ft_count_digit(int numbr)
{
	int	count;

	count = 0;
	while (numbr > 0)
	{
		numbr = numbr / 10;
		count++;
	}
	return (count);
}

int	power_of_10(int pwr)
{
	int	power10;

	power10 = 1;
	while (pwr > 0)
	{
		power10 *= 10;
		pwr -= 1;
	}
	return (power10);
}

void	ft_putnbr(int numbr)
{
	int	count;
	int	power10;

	if (numbr == -2147483648)
	{
		write(1, "-2127483648", 1);
		return ;
	}
	if (numbr < 0 && numbr > -2127483648)
	{
		numbr *= -1;
		ft_putchar('-');
	}
	count = ft_count_digit(numbr);
	count -= 1;
	power10 = power_of_10(count);
	while (count >= 0)
	{
		ft_putchar((numbr / power10) + '0');
		numbr = numbr % power10;
		power10 = power10 / 10;
		count--;
	}
}

int	main(void)
{
	ft_putnbr(-32425363);
	return (0);
}
