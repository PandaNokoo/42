/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:04:59 by mreboux           #+#    #+#             */
/*   Updated: 2026/01/29 19:23:23 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int		i;
	char	tab[10];

	i = 0;
	while (i < n)
	{
		tab[i] = '0' + i;
		i++;
	}
	while (1)
	{
		write(1, tab, n);
		if (tab[0] == '0' + 10 - n)
			return ;
		write(1, ", ", 2);
		i = n - 1;
		while (tab[i] == '0' + 9 - (n - 1 - i))
			i--;
		tab[i]++;
		while (++i < n)
			tab[i] = tab[i - 1] + 1;
	}
}
/*
int	main()
{
	ft_print_combn(5);
}
*/
