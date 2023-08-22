/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:54:14 by achosson          #+#    #+#             */
/*   Updated: 2023/08/06 11:46:14 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char l);

void	print_line(int width, char begin, char middle, char end)
{
	if (width > 0)
	{
		{
			ft_putchar(begin);
			width--;
		}
		while (width > 1)
		{
			ft_putchar(middle);
			width--;
		}
		if (width == 1)
		{
			ft_putchar(end);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	if (y <= 0)
		return ;
	print_line(x, 'o', '-', 'o');
	y--;
	while (y > 1)
	{
		print_line(x, '|', ' ', '|');
		y--;
	}
	if (y == 1)
		print_line(x, 'o', '-', 'o');
}
