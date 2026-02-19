/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onion.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:44:56 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/18 18:22:32 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	appeared_before_in_other_string(char c,	char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	appeared_before(char c, char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	onion(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if(appeared_before(str1[i], str1, i))
			write(1 , &str1[i], 1);
		i++;	    
	}
	i = 0;
	while (str2[i])
	{
		if(appeared_before_in_other_string(str2[i], str1))
		{
			if (appeared_before(str2[i], str2, i))
				write(1, &str2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		onion(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

