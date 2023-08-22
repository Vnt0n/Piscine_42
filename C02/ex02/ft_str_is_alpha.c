/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:07:08 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 11:53:03 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Not all alpha returns %d\n", ft_str_is_alpha("Salu*t"));
	printf("All alpha returns %d\n", ft_str_is_alpha("Salut"));
	printf("Empty returns %d\n", ft_str_is_alpha(""));

	return	(0);
}
*/
