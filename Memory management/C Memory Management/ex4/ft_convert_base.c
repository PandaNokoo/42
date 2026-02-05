/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:13:02 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/05 19:22:55 by mreboux          ###   ########.fr       */
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

char	f(char a, char b)
{
	if (a == b)
		return (NULL);
}

char	*wrong_base(char *base_from, char *base_to, char (*f)(char)(char))
{
	int	i;
	
	i = 0;
	if (ft_strlen(base_from) <= 1 || ft_strlen(base_to) <= 1)
		return (NULL);
	while (base_from[i] || base_to[i])
	{
		if (base_from[i] == 32 || base_from[i] == 43 || base_from[i] == 45)
			return (NULL);
		if (base_to[i] == 32 || base_to[i] == 43 || base_to[i] == 45)
			return (NULL);
		i++;
	}
	while (i < ft_strlen - 1)
	{
		if (f(base_from[i], base_from[i + 1]) == NULL || f(base_to[i], base_to[i + 1]) == NULL)
			return (NULL);
		i++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	char	*convert;
	
	i = 0;
	convert = malloc(sizeof(int) * ft_strlen(nbr) + 1);
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
	char	*nbr = "123";
	char	*base_from = "0123456789";
	char	*base_to = "0123456789ABCDEF";
	char	*convert;

	convert = ft_convert_base(nbr, base_from, base_to);
	#include <stdio.h>
	printf("%s", convert);
	return (0);
}
