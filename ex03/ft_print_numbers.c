/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:11:39 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/13 11:57:14 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int num) // using ft_putchar function ex00
{
  write(1, &num, 1);
};
void ft_print_numbers(void) // declare ft_print_numbers function
{
  int n;
  n = '0';
  while (n <= '9') {
    ft_putchar(n);
    n++;
  };
};
int main(void) // declare main function
{
  ft_print_numbers();
  return 0;
};
