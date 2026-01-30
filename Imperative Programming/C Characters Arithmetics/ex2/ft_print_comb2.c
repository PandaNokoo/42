/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:02:32 by mreboux           #+#    #+#             */
/*   Updated: 2026/01/29 20:03:29 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_print_putchar(int a, int b)
{
	if (a < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(a);
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(b);
}

void	ft_print_comb2(void)
{
	int	a;	
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print_putchar(a, b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main()
{
	ft_print_comb2();
}
*/
