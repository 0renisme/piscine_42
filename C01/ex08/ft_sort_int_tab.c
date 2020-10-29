/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 10:27:16 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/07 14:59:24 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int swap;

	i = 1;
	while (i <= size)
	{
		if (tab[i] < tab[i - 1])
		{
			swap = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = swap;
			i = 0;
		}
		i++;
	}
}
