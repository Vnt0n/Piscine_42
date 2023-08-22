/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:28:53 by achosson          #+#    #+#             */
/*   Updated: 2023/08/18 12:12:11 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n > 1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0 && *s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("abcd", "abcd", 2));
	printf("%d\n", ft_strncmp("abcde", "abcdf", 5));
	printf("%d\n", ft_strncmp("abz", "abw", 3));
	printf("%d\n", ft_strncmp("!234", " 236", 4));
	printf("%d\n", ft_strncmp("1234", "1234", 4));
	return (0);
}
*/
