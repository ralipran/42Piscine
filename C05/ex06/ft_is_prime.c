/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:45:54 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/09 00:01:52 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		else
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 11;
	printf("La réponse est : %d\n", ft_is_prime(nb));
}*/
