/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:11:35 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/20 12:21:13 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i -= 32;
	else
		return (i);
	return (i);
}
/*
int	main(void)
{
	int i;

	i = 'W';
	#include <stdio.h>
   	printf("%c", ft_toupper(i));
	return (0);
}*/
