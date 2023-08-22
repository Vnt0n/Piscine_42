/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:48:45 by achosson          #+#    #+#             */
/*   Updated: 2023/08/07 14:26:02 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	ft_div_mod(4, 2, &c, &d);
	printf("4 divided by 2 is %d.\n", c);
	printf("4 modulo 2 is %d.\n", d);
	printf("GOOD JOB!\n");
	return (0);
}
*/
