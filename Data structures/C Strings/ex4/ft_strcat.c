/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:30:33 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/12 14:58:29 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = ft_strlen(dest);
	y = 0;
	while (i < ft_strlen(dest) + ft_strlen(src))
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
	char dest[8] = "titi";
	char *src  = "toto";
	
	//printf("%d", ft_strlen(dest) + ft_strlen(src));
	printf("%s", ft_strcat(dest, src));
	return (0);
}
*/
