/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:42:20 by ralipran          #+#    #+#             */
/*   Updated: 2024/10/01 15:42:23 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	while (--i > 0)
	{
		write(1 , &str[i], 1);
	}
	if (str[0])
	{
		write(1 , &str[0], 1);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		rev_print(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
