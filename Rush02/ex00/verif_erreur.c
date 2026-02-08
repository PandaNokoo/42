/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_erreur.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofombar <sofombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:24:03 by sofombar          #+#    #+#             */
/*   Updated: 2026/02/08 14:06:19 by sofombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

char	*pas_bon_arg(char *copy, char **argv)
{
	int	j;

	j = 0;
	while (j < 31)
	{
		if (!(argv[1][j] == '1' || argv[1][j] == 32
			|| argv[1][j] == '2' || argv[1][j] == '3'
				|| argv[1][j] == '4'))
		{
			write(1, "error\n", 6);
			return (NULL);
		}
		j++;
	}
	return (copy);
}

char	*pas_bon_nb_arg(int argc, char *copy)
{
	if (argc != 2)
	{
		write(1, "error\n", 6);
		return (NULL);
	}
	return (copy);
}

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
		pas_bon_arg(copy, argv);
	}
	else
	{
		write(1, "error\n", 6);
		return (NULL);
	}
	return (copy);
}
