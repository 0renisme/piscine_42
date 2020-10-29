/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:53:16 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/27 19:54:02 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (str[i] && i < n)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dest_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest, size);
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	if (size == dest_len)
		return (j + size);
	while ((dest_len + i) < size - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + j);
}
