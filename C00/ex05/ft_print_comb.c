/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:39:45 by ralipran          #+#    #+#             */
/*   Updated: 2024/08/23 15:25:06 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a < '7')
					{
						write(1, ", ", 2);
					}
					c++;
			}
			b++;
		}
		a++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
