/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:44:19 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/21 14:07:54 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z')
		|| (i >= 'A' && i <= 'Z')
		|| (i >= 0 && i <= 9))
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
   	printf("%d", ft_isalnum(i));
	return (0);
}
*/
