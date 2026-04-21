/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:04:24 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/21 18:17:02 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	int	i;
	int	y;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i])
	{
		y = 0;
		while (big[i + y] == little[y] && little[y] != '\0')
			y++;
		if (little[y] == '\0' && ft_strlen(&big[i]) <= len)
			return (&big[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*big = "Hello World";
	char	*little = "Wo";
	#include <stdio.h>
	printf("%s", ft_strnstr(big, little, 5));
	return (0);
}
*/
