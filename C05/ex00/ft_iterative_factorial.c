/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:27:41 by achosson          #+#    #+#             */
/*   Updated: 2023/08/21 17:56:50 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
*/
