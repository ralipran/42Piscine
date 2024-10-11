/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:57:56 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/10 16:50:20 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
			i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc == 1)
		return (0);
	while (i > 0)
	{
		ft_putstr(argv[i]);
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
