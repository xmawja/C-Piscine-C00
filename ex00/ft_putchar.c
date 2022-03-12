/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:17:13 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/12 17:42:03 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>                   //call standard library
    
void ft_putchar(char c)               //declare ft_putchar function
{
    write(1, &c, 1);
};

int main()                           // declare main function
{
    ft_putchar('4');                 // call ft_putchar function
    return 0;
};
