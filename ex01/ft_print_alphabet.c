/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:48:26 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/12 20:31:22 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char a)                      // using ft_putchar function ex00
{
    write(1, &a, 1);
}

void    ft_print_alphabet(void)                 // declare alphabet function 
{
    char    l;

    l = 'a';
    while (l <= 'z')
    {
        ft_putchar(l);
        l++;                                    
    }
};

int     main(void)                              // declare main function
{   
    ft_print_alphabet();
    return 0;
};
