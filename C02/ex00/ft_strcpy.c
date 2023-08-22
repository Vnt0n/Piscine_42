/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:06:17 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 11:46:41 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "COUCOU";
	char	dest[30];

	printf("First src is '%s' and dest is '%s'\n", src, dest);
	ft_strcpy(dest, src);
	printf("Now src is '%s', and dest is '%s'\n", src, dest);

	return (0);
}
*/
