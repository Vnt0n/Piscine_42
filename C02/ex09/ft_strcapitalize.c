/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:28:08 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 15:10:18 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lowercase(c) || ft_is_uppercase(c) || ft_is_number(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_alpha(str[i - 1]) && ft_is_lowercase(str[i]))
			str[i] -= 32;
		if (ft_is_uppercase(str[i]) && ft_is_alpha(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = {"salut, comment tu vas TOI ?"};
	char y[] = {"42mots quarante-deux; cinquante+et+un"};

	printf("%s\n", ft_strcapitalize(x));
	printf("n%s\n", ft_strcapitalize(y));

	return (0);
}
*/
