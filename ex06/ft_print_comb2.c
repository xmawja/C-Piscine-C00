/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:39:30 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/14 13:39:33 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char n) 
{
	write(1, &n, 1);
}

void ft_print_comb2(void)
{
	int a;
	int b;
	a = 0;
	while (a <= 9)
		{
			a = 0;
			while (b <= 9)
				{
					b = 0;
					ft_putchar(a);
					ft_putchar(b);
					b++;
					if (a <= 9) {
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
			a++;
		}
}

int main()
{
	ft_print_comb2();
	return 0;
}
