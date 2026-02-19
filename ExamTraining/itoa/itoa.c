/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:46:36 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/19 21:28:19 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	nb_de_chiffre(long n)
{
	int i = 0;

	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int long	n;
	char	*str;
	int	i;
	n = nbr;
	i = nb_de_chiffre(n);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}

	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}
 
int	main(void)
{
	long int n = -2147483648;
	int	i = 0;
	char	*str = ft_itoa(n);

	while (str[i])
	{	
		printf("%c", str[i]);
		i++;
	}
} 
