/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:10:34 by mreboux           #+#    #+#             */
/*   Updated: 2026/01/31 18:20:30 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	somme;

	somme = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		somme *= nb;
		power--;
	}
	return (somme);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(5,3));
}
*/
