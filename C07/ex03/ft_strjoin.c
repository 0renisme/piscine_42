/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:14:58 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/24 16:55:14 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*copy_sep(char *dest, char *sep, int k)
{
	int i;

	i = 0;
	while (sep[i])
	{
		dest[k] = sep[i];
		i++;
		k++;
	}
	return (dest);
}

char	*copy_after_malloc(char **strs, char *dest, char *sep, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < size - 1)
		{
			dest = copy_sep(dest, sep, k);
			k += ft_strlen(sep);
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		cpt_for_malloc;
	int		i;
	char	*dest;

	if (size <= 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	cpt_for_malloc = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		cpt_for_malloc += ft_strlen(strs[i]);
		i++;
	}
	if (!(dest = malloc(sizeof(char) * (cpt_for_malloc + 1))))
		return ((char *)0);
	dest = copy_after_malloc(strs, dest, sep, size);
	return (dest);
}
