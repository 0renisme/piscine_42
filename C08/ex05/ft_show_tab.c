/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:02:45 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/26 14:30:55 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void					ft_putchar(char c)
{
	write(1, &c, 1);
}

void					ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void					ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putstr("-2147483648");
			return ;
		}
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void					ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].size != 0)
	{
		ft_putstr(av2[i].str);
		write(1, "\n", 1);
		ft_putnbr(av2[i].size);
		write(1, "\n", 1);
		ft_putstr(av2[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
