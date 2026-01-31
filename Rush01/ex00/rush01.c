/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:46:34 by mreboux           #+#    #+#             */
/*   Updated: 2026/01/31 12:57:23 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_square(int x, int y, int i, int j)
{
	if (i == 1 && j == 1 || i == y && j == x)
		ft_putchar('/');
	else if (i == y && j == 1 || i == 1 && j == x)
		ft_putchar('\\');
	else if (i == 1 || i == y)
		ft_putchar('*');
	else if (j == 1 || j == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x > 0 && y > 0)
	{
		i = 1;
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				ft_print_square(x, y, i, j);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}
