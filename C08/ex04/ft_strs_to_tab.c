/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:31:40 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/26 14:30:33 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char					*ft_strdup(char *src)
{
	char *dest;

	if (!(dest = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return ((char*)0);
	return (ft_strcpy(dest, src));
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*av2;

	if (!(av2 = malloc(sizeof(*av2) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		av2[i].size = ft_strlen(av[i]);
		av2[i].str = ft_strdup(av[i]);
		av2[i].copy = ft_strdup(av[i]);
		i++;
	}
	av2[i].size = 0;
	av2[i].str = 0;
	av2[i].copy = 0;
	return (av2);
}
