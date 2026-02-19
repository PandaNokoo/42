/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:08:56 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/19 18:53:34 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


char	*ft_rev_print(char *str)
{
	int	i = 0;
	int	last;

	last = ft_strlen(str) - 1;
	while (last >= 0)
	{
		write(1, &str[last], 1);
		last--;
	}
	return (str);
}

int	main(int argc, char **argv)
{	
	if (argc == 2)
		ft_rev_print(argv[1]);
	write(1, "\n", 1);
}
