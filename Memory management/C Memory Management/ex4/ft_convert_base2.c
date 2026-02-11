/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:45:35 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/11 13:24:23 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	wrong_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_create_nbr_base(int nbr, char *base, char *convert, int *index)
{
	int	nombre;
	int	base_len;

	nombre = nbr;
	base_len = ft_strlen(base);
	if (nombre < 0)
	{
		convert[*index] = '-';
		*index += 1;
		nombre = -nombre;
	}
	if (nombre < base_len)
	{
		convert[*index] = base[nombre];
		*index += 1;
	}
	else
	{
		ft_create_nbr_base(nombre / base_len, base, convert, index);
		convert[*index] = base[nombre % base_len];
		*index += 1;
	}
}
