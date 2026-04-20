/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:57:33 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/20 12:03:35 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int i;

	i = '\t';
	#include <stdio.h>
   	printf("%d", ft_isprint(i));
	return (0);
}
*/
