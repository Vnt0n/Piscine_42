/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:15:11 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 13:10:56 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char w[] = {"ABC"};
	char x[] = {"AbC"};
	char y[] = {"dd"};
	char z[] = {"Antoine Chosson"};
	
	printf("ABC returns %s\n", ft_strupcase(w));
	printf("AbC returns %s\n", ft_strupcase(x));
	printf("dd returns %s\n", ft_strupcase(y));
	printf("Antoine Chosson returns %s\n", ft_strupcase(z));

	return	(0);
}
*/
