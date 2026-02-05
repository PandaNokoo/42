/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:30:54 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/05 17:03:05 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	ft_swap(&a, &b);
	printf("%d et %d", a, b);
}
