/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:21:40 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/03 14:33:23 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	f(int c)
{
	#include <stdio.h>
	printf("%d", c);
}

int	main(void)
{
	int tab[] = {49, 2, 3, 4, 5, 6};
	int length;
	int i;

	i = 0;
	length = 6;
	ft_foreach(tab, length,&f);
	
	return (0);
}
*/
