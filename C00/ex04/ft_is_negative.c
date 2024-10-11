/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:39:39 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/11 17:05:11 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
	{
	char	positif;
	char	negatif;

	positif = 'P';
	negatif = 'N';
	if (n < 0)
	{
		write(1, &negatif, 1);
	}
	else
	{
		write(1, &positif, 1);
	}
}
