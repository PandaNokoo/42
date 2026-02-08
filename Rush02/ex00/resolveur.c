/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolveur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:19:50 by sofombar          #+#    #+#             */
/*   Updated: 2026/02/08 16:46:32 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

char	**creation_tableau(char *copy)
{
	char	tab[6][6];

	tab[0][1] = copy[0];
	tab[0][2] = copy[2];
	tab[0][3] = copy[4];
	tab[0][4] = copy[6];
	tab[5][1] = copy[8];
	tab[5][2] = copy[10];
	tab[5][3] = copy[12];
	tab[5][4] = copy[14];
	tab[1][0] = copy[16];
	tab[2][0] = copy[18];
	tab[3][0] = copy[20];
	tab[4][0] = copy[22];
	tab[1][5] = copy[24];
	tab[2][5] = copy[26];
	tab[3][5] = copy[28];
	tab[4][5] = copy[30];
	return (tab);
}

void	remplissage(char tab[6][6])
{
}
