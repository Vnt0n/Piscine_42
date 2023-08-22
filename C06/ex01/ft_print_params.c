/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:58:16 by achosson          #+#    #+#             */
/*   Updated: 2023/08/20 15:23:03 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *params)
{
	int	i;

	i = 0;
	while (params[i])
	{
		write(1, &params[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	argc = 0;
	while (argv[i])
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
