/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:14:40 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/16 20:21:33 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		cmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (0);
		if (s2[i] > s1[i])
			return (1);
		i++;
	}
	i = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i <= j)
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	j = 0;
	while (i < (ac - 1))
	{
		j = cmp(av[i], av[i + 1]);
		if (j == 0)
		{
			swap = av[i];
			av[i] = av[i + 1];
			av[i + 1] = swap;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}
