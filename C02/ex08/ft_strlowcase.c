/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:22:38 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 13:12:00 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char x[] = {"abc"};
	char y[] = {"aBc"};
	char z[] = {"Antoine Chosson"};

	printf("abc returns %s\n", ft_strlowcase(x));
	printf("aBc returns %s\n", ft_strlowcase(y));
	printf("Antoine Chosson returns %s\n", ft_strlowcase(z));

	return	(0);
}
*/
