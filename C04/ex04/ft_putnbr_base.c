/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:07:50 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/12 22:36:07 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		conditions(char *base)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (base[count])
	{
		if ((base[count] == '+') || (base[count] == '-'))
			return (0);
		while (base[i])
		{
			if ((base[count] == base[i]) && (i != count))
				return (0);
			i++;
		}
		i = 0;
		count++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	int	div;
	int	result;

	div = 1;
	count = conditions(base);
	if (count < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	while ((nbr / div) >= count)
		div = div * count;
	while (div > 0)
	{
		result = ((nbr / div) % count);
		ft_putchar(base[result]);
		div = div / count;
	}
}
