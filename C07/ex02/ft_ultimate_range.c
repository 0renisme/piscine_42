/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:11:57 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/24 20:11:34 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = max - min;
	if (!(*range = malloc(sizeof(int) * i)))
		return (-1);
	size = max - min;
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
