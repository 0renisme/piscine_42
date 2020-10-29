/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:23:38 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/07 15:03:42 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int nb;

	i = 0;
	while (i < size)
	{
		nb = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = nb;
		size--;
		i++;
	}
}
