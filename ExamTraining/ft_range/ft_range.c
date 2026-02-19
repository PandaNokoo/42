/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:06:59 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/19 20:27:17 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i = 0;
	int	*range;
	
	if (start == end)
	{
		range = malloc(sizeof(int));
		range[0] = end;
		return (range);
	}	
	range = malloc(sizeof(int) * (end - start));
	if (!range)
		return (NULL);
	if (start >= end)
		return (NULL);
	while(i <= (end - start)) 
	{
		range[i] = start + i;
		i++;
	}
	return (range);
}

int	main(void)
{
	int start;
	int end;
	int i;
	int *tab;

	start = 0;
	end = 0;
	i = 0;
	tab = ft_range(start, end);
	#include <stdio.h>
	while (i <= (end - start))
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
