/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:08:19 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/03 01:05:38 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
			j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%s\n", ft_strcat(argv[1], argv[2]));
	return (0);
}
*/
