/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:13:02 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/11 13:31:53 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		wrong_base(char *base);
void	ft_create_nbr_base(int nbr, char *base, char *convert, int *index);

int	ft_find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	signe;
	int	nombre;
	int	i;

	signe = 1;
	nombre = 0;
	i = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		i++;
	while ((nbr[i] == '+' || nbr[i] == '-'))
	{
		if (nbr[i] == '-')
			signe = -signe;
		i++;
	}
	while (nbr[i])
	{
		if (ft_find_index(nbr[i], base) == -1)
			return (nombre * signe);
		nombre = (nombre * ft_strlen(base)) + ft_find_index(nbr[i], base);
		i++;
	}
	return (nombre * signe);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		nombre;
	char	*convert;

	i = 0;
	if (wrong_base(base_from) || wrong_base(base_to))
		return (NULL);
	nombre = ft_atoi_base(nbr, base_from);
	convert = malloc(sizeof(char) * 34);
	if (!convert)
		return (NULL);
	ft_create_nbr_base(nombre, base_to, convert, &i);
	convert[i] = '\0';
	return (convert);
}
/*
int	main(void)
{
	char	*nbr = "-2147483647";
	char	*base_from = "0123456789";
	char	*base_to = "01";
	char	*convert;
	convert = ft_convert_base(nbr, base_from, base_to);
	printf("%s", convert);
	return (0);
}
*/
