/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:32:05 by achosson          #+#    #+#             */
/*   Updated: 2023/08/07 21:06:57 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;
	int	d;

	c = 10;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
	printf("10 divided by 5 equal %d\n", c);
	printf("10 modulo 5 equal %d\n", d);
}
*/
