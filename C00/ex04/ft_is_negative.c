/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:58:51 by achosson          #+#    #+#             */
/*   Updated: 2023/08/03 10:22:48 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		n = 80;
		write(1, &n, 1);
	}
	else
	{
		n = 78;
		write(1, &n, 1);
	}
}

/*

int	main(void)
{
	ft_is_negative(-2);
	ft_is_negative(2);
	return (0);
}

*/
