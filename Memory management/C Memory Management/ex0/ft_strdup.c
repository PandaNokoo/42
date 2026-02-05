/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:38:04 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/05 14:08:17 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
/*
int	main(void)
{
	char	*src;
	char	*dup;

	src = "test";
	dup = ft_strdup(src);
	#include <stdio.h>
	printf("%s", dup);
	return (0);
}
*/
