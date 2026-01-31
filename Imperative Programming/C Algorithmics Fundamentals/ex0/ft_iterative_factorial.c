/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:58:12 by mreboux           #+#    #+#             */
/*   Updated: 2026/01/31 17:07:38 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	somme;

	somme = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		somme *= nb;
		nb--;
	}
	return (somme);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(4))a;
}
*/
