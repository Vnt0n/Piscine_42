/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchoula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:57:45 by ptchoula          #+#    #+#             */
/*   Updated: 2023/08/13 21:31:12 by ptchoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_settab(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_newstr(int args[16], char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ('1' <= str[i] && str[i] <= '4')
		{
			args[j] = str[i] - 48;
			j++;
		}
		else if (!((6 < str[i] && str[i] < 14) || (str[i] == 32)))
			return (-1);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_setclues(int clues[4][4], char *argv)
{
	int	i;
	int	j;
	int	l;
	int	args[16];

	i = 0;
	l = ft_strlen(argv);
	if (l != 31)
		return (0);
	if (!ft_newstr(args, argv))
		return (0);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			clues[i][j] = args[i * 4 + j];
			j++;
		}
		i++;
	}
	return (1);
}
