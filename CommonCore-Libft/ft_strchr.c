/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:35:07 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/20 13:24:21 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i] && c != s[i])
		i++;
	if (c == s[i])
		return ((char *)&s[i]);
	return (0);
}

int	main(void)
{
	char	 string[5] = "test";
	#include <stdio.h>
	printf("%s", ft_strchr(string, 'e'));
	return (0);
}

