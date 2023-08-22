/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:09:06 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 11:52:41 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Not all numeric returns %d\n",ft_str_is_numeric("1212p321"));
	printf("All numeric returns %d\n",ft_str_is_numeric("1212321"));
	printf("Empty returns %d\n",ft_str_is_numeric(""));

	return	(0);
}
*/
