/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:55:12 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/12 18:30:51 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = ft_strlen(dest);
	y = 0;
	while (i < ft_strlen(dest) + ft_strlen(src) && y < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[9] = "titi";
	char *src  = "toto";
	int	nb;

	nb = 3;
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}
*/
