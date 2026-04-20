/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:21:33 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/20 12:23:00 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += 32;
	else
		return (i);
	return (i);
}
/*
int	main(void)
{
	int i;

	i = '@';
	#include <stdio.h>
   	printf("%c", ft_tolower(i));
	return (0);
}*/
