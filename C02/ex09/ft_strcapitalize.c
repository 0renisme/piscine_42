/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 10:08:18 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/12 23:11:52 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	display_conditions(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (-32);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int maj;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			maj = display_conditions(str[i - 1]);
			str[i] += maj;
		}
		i++;
	}
	return (str);
}
