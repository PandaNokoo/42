/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:15:54 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/12 19:49:43 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*str1 = "ti";
	char	*str2 = "to";

	#include <stdio.h>
	printf("%d", ft_strcmp(str1, str2));
	return (0);
}
*/
