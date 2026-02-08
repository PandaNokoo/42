/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver_si_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:55:15 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/08 16:27:10 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

char	*resolver_si_4_col_p1(char tab[6][6])
{
	int		x;
	int		y;
	char	number;

	x = 1;
	y = 1;
	number = '1';
	while (y < 5)
	{
		if (tab[0][y] == '4')
		{
			tab[x][y] = number;
			number++;
			x++;
		}
		y++;
	}
	return (tab[6][6]);
}

char	*resolver_si_4_col_p2(char tab[6][6])
{
	int		x;
	int		y;
	char	number;

	x = 1;
	y = 1;
	number = '1';
	while (y < 5)
	{
		if (tab[5][y] == '4')
		{
			tab[x][y] = number;
			number++;
			x++;
		}
		y++;
	}
	return (tab[6][6]);
}

char	*resolver_si_4_li_p1(char tab[6][6])
{
	int		x;
	int		y;
	char	number;

	x = 1;
	y = 1;
	number = '1';
	while (x < 5)
	{
		if (tab[x][0] == '4')
		{
			tab[x][y] = number;
			number++;
			y++;
		}
		x++;
	}
	return (tab[6][6]);
}

char	*resolver_si_4_li_p2(char tab[6][6])
{
	int		x;
	int		y;
	char	number;

	x = 1;
	y = 1;
	number = '1';
	while (x < 5)
	{
		if (tab[x][5] == '4')
		{
			tab[x][y] = number;
			number++;
			y++;
		}
		x++;
	}
	return (tab[6][6]);
}
