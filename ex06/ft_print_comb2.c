/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:39:30 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/15 14:59:04 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char *hchar)
{
	write(1, hchar, 1);
	write(1, (hchar + 1), 1);
	write(1, " ", 1);
	write(1, (hchar + 2), 1);
	write(1, (hchar + 3), 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	value[4];

	a = 0;
	while (a <= 100)
	{
		b = 0;
		while (b < 100)
		{
			if (a < b)
			{
				value[0] = a / 10 + '0';
				value[1] = a % 10 + '0';
				value[2] = b / 10 + '0';
				value[3] = b % 10 + '0';
				ft_print_char(value);
				if (!(a == 98 && b == 99))
					write(1, ", ", 1);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
