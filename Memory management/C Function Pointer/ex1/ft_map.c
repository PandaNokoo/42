/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:04:59 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/04 16:27:46 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret;

	i = 0;
	ret = malloc(sizeof(int) * length);
	if (!ret)
		return (NULL);
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
/*
int	f(int nb)
{	
	return (nb * 2);
}

int	main(void)
{
	int 	tab[3] = {1 ,2 , -10};
	int	*tab2;
	int	i;
	int	length;

	length = 3;
	i = 0;
	tab2 = ft_map(tab, length, &f);
	#include <stdio.h>
	while(i < length)
	{
		printf("%d", tab2[i]);
		i++;
	}
	return (0);
}
*/
