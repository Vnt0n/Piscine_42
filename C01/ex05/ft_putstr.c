/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:59:37 by achosson          #+#    #+#             */
/*   Updated: 2023/08/07 16:14:32 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str > 0)
	{
		write(1, str, 1);
		str++;
	}
}

/*
int	main(void)
{
	ft_putstr("Hello World!\n");
	return (0);
}
*/
