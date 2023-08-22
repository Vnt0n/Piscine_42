/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:12:43 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 11:55:02 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("All uppercase returns %d\n", ft_str_is_uppercase("QWERTY"));
	printf("Not all uppercase returns %d\n", ft_str_is_uppercase("QWeRTY"));
	printf("Empty returns %d\n", ft_str_is_uppercase(""));

	return	(0);
}
*/
