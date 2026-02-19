/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:27:11 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/19 15:48:35 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (i != 0)
			{
				if (ft_str_is_alphanum(str[i - 1]))
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
int	main(void)
{
	char string[] = "hello, how are you doing? 42words forty-two; fifty+and+one";
	#include <stdio.h>
	printf("%s", ft_strcapitalize(string));
	return (0);
}
