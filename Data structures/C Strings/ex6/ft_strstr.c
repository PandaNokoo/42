/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:07:51 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/12 14:59:11 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		y = 0;
		while (str[i + y] == to_find[y] && to_find[y] != '\0')
			y++;
		if (to_find[y] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str = "Hello World";
	char	*to_find = "Wo";
	#include <stdio.h>
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
*/
