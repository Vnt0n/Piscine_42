/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchoula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:55:43 by ptchoula          #+#    #+#             */
/*   Updated: 2023/08/13 21:11:16 by ptchoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_errexit(void)
{
	write(1, "Error\n", 6);
}

void	ft_puttab(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			if (j % 4 != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_score(int *lign)
{
	int	i;
	int	max;
	int	score;

	i = 0;
	max = 0;
	score = 0;
	while (i < 4)
	{
		if (lign[i] > max)
		{
			score += 1;
			max = lign[i];
		}
		i++;
	}
	return (score);
}

int	ft_rev_score(int *lign)
{
	int	i;
	int	max;
	int	score;

	i = 3;
	max = 0;
	score = 0;
	while (i > -1)
	{
		if (lign[i] > max)
		{
			score += 1;
			max = lign[i];
		}
		i--;
	}
	return (score);
}
