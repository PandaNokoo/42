/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:21:48 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/04 16:52:37 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int min;
	int max;
	int i;
	int *tab;

	min = 1;
	max = 3;
	i = 0;
	tab = ft_range(min, max);
	#include <stdio.h>
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/
