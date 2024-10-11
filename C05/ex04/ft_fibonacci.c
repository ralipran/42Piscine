/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:27:32 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/05 15:03:22 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	nb = ft_fibonacci(index - 1);
	nb = nb + ft_fibonacci(index - 2);
	return (nb);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("Le résultat est : %d\n", ft_fibonacci(atoi(argv[1])));
			return (0);
}*/
