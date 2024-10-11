/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralipran <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:59:24 by ralipran          #+#    #+#             */
/*   Updated: 2024/09/11 14:01:31 by ralipran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*truc;
	int		i;

	i = 0;
	truc = (char *)malloc(sizeof(char) * 32);
	while (src[i])
	{
		truc[i] = src[i];
		i++;
	}
	truc[i] = '\0';
	return (truc);
}
