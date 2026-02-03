/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:04:45 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/03 18:08:39 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_croissant(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_decroissant(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if ((ft_croissant(tab, length, f) == 1)
		|| (ft_decroissant(tab, length, f) == 1))
		return (1);
	else
		return (0);
}
/*
int	f(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[] = {1,2,3,4,5};
	int	tab2[] = {5,4,3,2,1};
	int	tab3[] = {1,3,2,4,5};
	int	length;

	length = 5;
	#include <stdio.h>
	printf("%d\n", ft_is_sort(tab, length, &f));
	printf("%d\n", ft_is_sort(tab2, length, &f));
	printf("%d\n", ft_is_sort(tab3, length, &f));
	return (0);
}
*/
