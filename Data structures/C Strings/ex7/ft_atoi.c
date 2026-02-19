/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:31:43 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/19 13:40:28 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signe;
	int	nombre;
	int	i;

	signe = 1;
	nombre = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nombre = nombre * 10 + (str[i] - '0');
		i++;
	}
	return (nombre * signe);
}

int	main(void)
{
	char *str = "  ----+++---1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}

