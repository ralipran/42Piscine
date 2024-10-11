/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:12:30 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/11 15:32:28 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	taille;
	int	*tab;
	int	i;

	i = 0;
	taille = max - min;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * taille);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
