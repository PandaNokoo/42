/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:55:21 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/21 14:14:45 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*str1 = "tzti";
	char	*str2 = "t9to";
	int	n;
	
	n = 2;
	#include <stdio.h>
	printf("%d", ft_strncmp(str1, str2, n));
	return (0);
}
*/
