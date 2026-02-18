/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:03:45 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/18 14:31:32 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	palindrome(char *str)
{
	int	i = 0;
	int	last = ft_strlen(str) - 1;
	
	while (str[i])
	{
		if (str[i] != str[last])
			return (0);
		i++;
		last--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", palindrome(argv[1]));
	return (0);
}
