/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:25:29 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/20 11:37:36 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z')
		|| (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int i;

	i = 'a';
	#include <stdio.h>
   	printf("%d", ft_isalpha(i));
	return (0);
}
*/
