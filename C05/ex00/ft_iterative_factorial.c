/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:32:08 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/15 09:55:37 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
