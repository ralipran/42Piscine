/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:30:27 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/02 15:15:27 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	taille;

	taille = 0;
	while (str[taille] != '\0')
	{
		taille++;
	}
	return (taille);
}


int	main(void)
{
	printf("%d", ft_strlen("mehdi le goat"));
	return (0);
}

