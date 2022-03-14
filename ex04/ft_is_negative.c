/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:59:43 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/14 09:01:16 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int n)                  // call ft_putchar function ex00
{
	write(1, &n, 1);
}
void ft_is_negative(int n)              // declare ft_is_negative function
{
	
	if (n >= 0) {                       
		ft_putchar('P');
	}
	else if (n <= -0) {
		ft_putchar('N');
	}
}
int main(void)                          // declare main function
{
  ft_is_negative(0);                    // call ft_is_negative function for test
  return 0;
};
