/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 09:47:41 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/13 11:09:15 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char z)                         // using ft_putchar funchtion ex00
{
	write(1, &z, 1);
}

void ft_print_reverse_alphabet(void)            // declare reverse alphabet function
{
	char r;
	r = 'z';
	while (r >= 'a') {
		ft_putchar(r);
		r--;
	}
};
int main(void)                                  // declare main function

{
	ft_print_reverse_alphabet();
	return 0;
};
