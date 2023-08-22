/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchoula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:53:04 by ptchoula          #+#    #+#             */
/*   Updated: 2023/08/13 21:16:23 by ptchoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_solvetab(int tab[4][4], int clues[4][4], int index)
{
	int	value;

	if (index == 16 && ft_valid_tab(tab, clues))
		return (1);
	if (index < 16)
	{
		value = 1;
		while (value <= 4)
		{
			if (ft_valid_value(tab, index, value))
			{
				tab[index / 4][index % 4] = value;
				if (ft_solvetab(tab, clues, index + 1))
					return (1);
			}
			value++;
		}
	}
	return (0);
}

int	ft_valid_tab(int tab[4][4], int clues[4][4])
{
	int	i;

	i = -1;
	while (i++, i < 16)
	{
		if (i < 8)
		{
			if (!ft_valid_col(tab, clues, i))
				return (0);
		}
		else
		{
			if (!ft_valid_row(tab, clues, i))
				return (0);
		}
	}
	return (1);
}
