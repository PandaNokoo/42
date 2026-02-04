/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:54:10 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/04 18:06:05 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = malloc(sizeof(int) * (max - min));
	if (*range == 0)
		return (0);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int	main(void)
{
	int min;
	int max;
//	int i;
	int *tab;

	min = 1;
	max = 2;
//	i = 0;
	#include <stdio.h>
	printf("%d\n", ft_ultimate_range(&tab, min, max));
//	while (i < (max - min))
//	{
//		printf("%d\n", tab[i]);
//		i++;
//	}

}
*/
