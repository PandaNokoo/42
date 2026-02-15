/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:02:21 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/14 16:43:46 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	if (!src)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strlen(src + 1)));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	i = 0;
	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	while (i < ac)
	{
		stock[i].str = av[i];
		stock[i].size = ft_strlen(av[i]);
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
/*
int	main(int argc, char **argv)
{
	t_stock_str *stock;
	int	i;

	i = 0;
	stock = ft_strs_to_tab(argc, argv);
	#include <stdio.h>
	while (stock[i].str)
	{
		printf("%d\n%s\n%s\n", stock[i].size, stock[i].str, stock[i].copy);
		i++;
	}
	return (0);
}*/
