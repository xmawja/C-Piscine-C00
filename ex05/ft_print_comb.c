/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:03:27 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/14 09:25:41 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int n)
{
    write(1, &n, 3);
};

void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    for(a = '0'; a <= '9'; ++a)
    {
        for(b = '0'; b <= '9'; ++b)
        {
            for(c = '0'; c <='9'; ++c)
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                ft_putchar(',');
                ft_putchar(' ');
            };
        };
    };
};

int main()
{
    ft_print_comb();
    return 0;
};
