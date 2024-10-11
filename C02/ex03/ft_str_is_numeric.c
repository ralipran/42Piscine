/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:39:23 by ralipran          #+#    #+#             */
/*   Updated: 2024/08/29 00:13:36 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
			i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	int	resultat;

	resultat = ft_str_is_numeric("6558");

	printf("%d", resultat);
	return (0);
}*/
