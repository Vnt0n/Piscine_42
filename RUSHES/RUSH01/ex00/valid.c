/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchoula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:26:35 by ptchoula          #+#    #+#             */
/*   Updated: 2023/08/13 21:45:13 by ptchoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_valid_up(int tab[4][4], int index, int value)
{
	int	i;

	i = index / 4 - 1;
	while (i >= 0)
	{
		if (tab[i][index % 4] == value)
			return (0);
		i--;
	}
	return (1);
}

int	ft_valid_left(int tab[4][4], int index, int value)
{
	int	i;

	i = index % 4 - 1;
	while (i >= 0)
	{
		if (tab[index / 4][i] == value)
			return (0);
		i--;
	}
	return (1);
}

int	ft_valid_row(int tab[4][4], int clues[4][4], int index)
{
	int	rownum;
	int	*row;

	rownum = index / 4;
	row = tab[rownum];
	if (ft_score(row) != clues[2][rownum])
		return (0);
	if (ft_rev_score(row) != clues[3][rownum])
		return (0);
	return (1);
}

int	ft_valid_col(int tab[4][4], int clues[4][4], int index)
{
	int	colnum;
	int	col[4];
	int	i;

	colnum = index % 4;
	i = -1;
	while (i++, i < 4)
	{
		col[i] = tab[i][colnum];
	}
	if (ft_score(col) != clues[0][colnum])
		return (0);
	if (ft_rev_score(col) != clues[1][colnum])
		return (0);
	return (1);
}

int	ft_valid_value(int tab[4][4], int index, int value)
{
	if (!ft_valid_up(tab, index, value) || !ft_valid_left(tab, index, value))
		return (0);
	return (1);
}
