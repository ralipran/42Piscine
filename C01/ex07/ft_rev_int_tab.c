/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:12:27 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/11 19:50:52 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tempo;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tempo = tab[start];
		tab[start] = tab[end];
		tab[end] = tempo;
		start++;
		end--;
	}
}
