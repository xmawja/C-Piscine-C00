/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:03:27 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/14 12:12:48 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char n)
{
    write(1, &n, 1);
};

void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    a = 0;
    while (a <= 9)
    {
        b = a+1;
        while (b <= 9)
        {
            c =b+1;
            while (c <= 9)
            {
                ft_putchar(a + '0');
                ft_putchar(b + '0');
                ft_putchar(c + '0');
				c++;
				if(a != 7)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb();
    return 0;
};
