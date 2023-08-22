/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:53:01 by achosson          #+#    #+#             */
/*   Updated: 2023/08/07 21:26:38 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
#include <stdio.h>

int	main(void)
{
	int	first_number;
	int	second_number;

	first_number = 4;
	second_number = 2;
	ft_swap(&first_number, &second_number);
	printf("First number was 4. Now it's %d.\n", first_number);
	printf("Second number was 2. Now it's %d.\n", second_number);
	printf("GOOD JOB!!\n");
	return (0);
}
*/
