/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:54:55 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/02 13:03:24 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= '0' && str[i] <= '9')))
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*string;

	string = "124";
	#include <stdio.h>
	printf("%d", ft_str_is_numeric(string));
	return (0);
}
*/
