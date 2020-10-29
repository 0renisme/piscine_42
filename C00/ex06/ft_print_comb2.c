/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:09:04 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/06 15:12:17 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	writing(int nbr)
{
	if (nbr > 9)
	{
		ft_putchar(nbr / 10 + '0');
		ft_putchar(nbr % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nbr + '0');
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			writing(first);
			ft_putchar(' ');
			writing(second);
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}
