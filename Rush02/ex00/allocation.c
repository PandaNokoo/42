/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofombar <sofombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:24:03 by sofombar          #+#    #+#             */
/*   Updated: 2026/02/07 15:43:22 by sofombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

char	*verif(int argc, char **argv, char *copy)
{
	int	j;

	j = 0;
	if (!copy)
	{
		write(1, "error\n", 6);
		return (NULL);
	}
	if (argc == 2 && !(argv[1][31]))
	{
		while (j < 31)
		{
			copy[j] = argv[1][j];
			j++;
		}
	}
	else
	{
		write(1, "error\n", 6);
		return (NULL);
	}
	return (copy);
}
