/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:06:47 by achosson          #+#    #+#             */
/*   Updated: 2023/08/10 16:52:30 by achosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "COUCOU";
	char	dest[30];

	printf("First src is '%s' and dest is '%s'\n", src, dest);
	ft_strncpy(dest, src, -4);
	printf("Now src is '%s', and dest is '%s'\n", src, dest);

	return (0);
}
*/
