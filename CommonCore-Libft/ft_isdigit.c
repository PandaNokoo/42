/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:33:05 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/21 14:41:01 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 0 && i <= 9)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int i;

	i = 1;
	#include <stdio.h>
   	printf("%d", ft_isdigit(i));
	return (0);
}*/
