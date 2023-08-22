/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:32:27 by achosson          #+#    #+#             */
/*   Updated: 2023/08/22 13:04:34 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(4, 3));
	return (0);
}
*/
