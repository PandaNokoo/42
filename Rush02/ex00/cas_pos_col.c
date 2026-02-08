/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cas_pos_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofombar <sofombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:39:02 by sofombar          #+#    #+#             */
/*   Updated: 2026/02/07 16:17:21 by sofombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	cas_pos_col_p1(char *copy)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		if (copy[i] == '4')
		{
			if (copy[i + 8] == '1')
				return (0);
			else
				return (1);
		}
		else if (copy[i] == '3')
		{
			if (copy[i + 8] == '1' || copy[i + 8] == '2')
				return (0);
			else
				return (1);
		}
		i += 2;
	}
	return (0);
}

int	cas_pos_col_p2(char *copy)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		if (copy[i] == '2')
		{
			if (copy[i + 8] == '4')
				return (1);
			else
				return (0);
		}
		else if (copy[i] == '1')
		{
			if (copy[i + 8] == '1')
				return (1);
			else
				return (0);
		}
		i += 2;
	}
	return (0);
}

int	cas_pos_col_inv_p1(char *copy)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		if (copy[i + 8] == '4')
		{
			if (copy[i] == '1')
				return (0);
			else
				return (1);
		}
		else if (copy[i + 8] == '3')
		{
			if (copy[i] == '1' || copy[i] == '2')
				return (0);
			else
				return (1);
		}
		i += 2;
	}
	return (0);
}

int	cas_pos_col_inv_p2(char *copy)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		if (copy[i + 8] == '2')
		{
			if (copy[i] == '4')
				return (1);
			else
				return (0);
		}
		else if (copy[i + 8] == '1')
		{
			if (copy[i] == '1')
				return (1);
			else
				return (0);
		}
		i += 2;
	}
	return (0);
}

int	casposcol(char *copy)
{
	int	a;

	a = cas_pos_col_inv_p1(copy) + cas_pos_col_inv_p2(copy)
		+ cas_pos_col_p1(copy) + cas_pos_col_p2(copy);
	if (a == 0)
		return (0);
	return (1);
}
