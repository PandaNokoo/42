/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:35:23 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/04 13:08:29 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			nb++;
		i++;
	}
	return (nb);
}
/*
int	f(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == 'b')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*tab[] = {"hallo", "warld", NULL};
	int	length;

	length = 3;
	printf("%d", ft_count_if(tab, length,&f));
	return (0);
}
*/
