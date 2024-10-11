/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:00:51 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/12 14:00:57 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && (s1[i] || s2[i]))
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("salut", "andouille", 5));
	return (0);
}
