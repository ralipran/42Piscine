/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:55:35 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/02 16:45:40 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	int	resultat;

	resultat = ft_str_is_alpha("dg'[;'bIFGSIEUFGB"); 
	printf("%d", resultat);	
	return (0);
}*/
