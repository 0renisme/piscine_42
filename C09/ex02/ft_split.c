/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:15:16 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/27 15:25:53 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**strcp(char *str, char **tab, int *ct)
{
	int i;

	i = 0;
	if (!(tab[ct[2]] = (char *)malloc(sizeof(char) * (ct[1] - ct[0]))))
		return (NULL);
	ct[0]++;
	while (ct[0] < ct[1])
	{
		tab[ct[2]][i] = str[ct[0]];
		ct[0]++;
		i++;
	}
	tab[ct[2]][i] = '\0';
	ct[2]++;
	return (tab);
}

int		if_find_sep(char *str, int *ct, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (str[ct[1]] == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	**mallo(char *str)
{
	int		i;
	char	**tab;

	i = 0;
	while (str[i])
		i++;
	if (!(tab = malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		ct[3];

	ct[0] = -1;
	ct[1] = 0;
	ct[2] = 0;
	tab = mallo(str);
	while (str[ct[1]])
	{
		if (if_find_sep(str, ct, charset))
		{
			if (ct[1] != ct[0] + 1)
				tab = strcp(str, tab, ct);
			ct[0] = ct[1];
		}
		else if (str[ct[1] + 1] == '\0')
		{
			ct[1]++;
			tab = strcp(str, tab, ct);
			ct[1]--;
		}
		ct[1]++;
	}
	tab[ct[2]] = 0;
	return (tab);
}
