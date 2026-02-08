/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:13:02 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/08 18:42:12 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*wrong_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	
	i = 0;
	if (ft_strlen(base_from) <= 1 || ft_strlen(base_to) <= 1)
		return (NULL);
	while (base_from[i] || base_to[i])
	{
		if (!(ft_is_alphanum(base_from[i])))
			return (NULL);
		if (!(ft_is_alphanum(base_to[i])))
			return (NULL);
		i++;
	}
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
	while(str[i])
	{
	}
	return (nbr * signe);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	char	*convert;
	
	i = 0;
	convert = malloc(sizeof(char) * ft_strlen(nbr) + 1);
	while(nbr[i] != '\0')
	{
		convert[i] = base_to[nbr[i] / ft_strlen(base_to)];
		convert[i] = base_to[nbr[i] % ft_strlen(base_to)];
		i++;
	}
	return (convert);
	free(convert);
}

int	main(void)
{
	char	*nbr = "10";
	char	*base_from = "0123456789";
	char	*base_to = "0123456789ABCDEF";
	char	*convert;

	convert = ft_convert_base(nbr, base_from, base_to);
	#include <stdio.h>
	printf("%s", convert);
	return (0);
}
