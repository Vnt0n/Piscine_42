/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchoula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:41:59 by ptchoula          #+#    #+#             */
/*   Updated: 2023/08/13 21:29:11 by ptchoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	clues[4][4];

	if (argc == 2)
	{
		ft_settab(tab);
		if (!ft_setclues(clues, argv[1]))
		{
			ft_errexit();
			return (-1);
		}
		if (!ft_solvetab(tab, clues, 0))
		{
			ft_errexit();
			return (-1);
		}
		ft_puttab(tab);
		return (0);
	}
	ft_errexit();
	return (-1);
}
