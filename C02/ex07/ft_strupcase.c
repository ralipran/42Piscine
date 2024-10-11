/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:55:12 by ralipran          #+#    #+#             */
/*   Updated: 2024/08/29 00:16:20 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
			i++;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char str[] = "Darell il bade trop";
	printf("%s", ft_strupcase(str));
	return (0);
}*/
