/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:10:36 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 11:52:17 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("All lowercase returns %d\n", ft_str_is_lowercase("qwerty"));
	printf("Not all lowercase returns %d\n", ft_str_is_lowercase("qTerty"));
	printf("Empty lowercase returns %d\n", ft_str_is_lowercase(""));

	return	(0);
}
*/
