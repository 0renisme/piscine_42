/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:35:41 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/11 17:18:06 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skip_isspace(char *str)
{
	int i;

	i = 0;
	while (str[i] && ((str[i] == '\t') || (str[i] == '\n') ||
				(str[i] == '\r') || (str[i] == '\v') ||
				(str[i] == '\f') || (str[i] == ' ')))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int count_sign;
	int result;
	int sign;
	int i;

	count_sign = 0;
	result = 0;
	sign = 1;
	i = skip_isspace(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count_sign++;
		i++;
	}
	if (count_sign % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * sign);
}
