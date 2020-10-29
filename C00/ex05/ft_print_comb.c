/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 09:43:00 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/06 18:52:03 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	affichage(char hundred, char ten, char unit)
{
	ft_putchar(hundred + '0');
	ft_putchar(ten + '0');
	ft_putchar(unit + '0');
	if (hundred != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int hundred;
	int ten;
	int unit;

	hundred = 0;
	while (hundred <= 7)
	{
		ten = hundred + 1;
		while (ten <= 9)
		{
			unit = ten + 1;
			while (unit <= 9)
			{
				affichage(hundred, ten, unit);
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}
