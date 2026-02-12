/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:13:41 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/12 18:17:48 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (n > ft_strlen(src))
		dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src = "hello!";
	char	dest[90];
	int	n;

	n = 4;
	#include <stdio.h>
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}*/
