/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:22:06 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/01 17:43:46 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	debut;
	int	fin;

	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		debut++;
		fin--;
	}
}
/*
int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	int		size;
	int		i;

	size = 5;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
