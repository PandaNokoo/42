/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:19:11 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/21 17:45:48 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;
	size_t	res;

	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	res = 0;
	i = 0;
	if (size > ld)
		res = ls + ld;
	else
		res = ls + size;
	while (dest[i] && ld <= size)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (res);
}
/*
int	main(void)
{
	char dest[9] = "titi";
	char *src  = "toto";
	#include <stdio.h>
	printf("%d", ft_strlcat(dest, src, 3));
	return (0);
}
*/
