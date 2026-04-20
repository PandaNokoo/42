/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:06:27 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/20 13:23:42 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	char	 *string = "teset";
	#include <stdio.h>
	printf("%s", ft_strrchr(string, 'e'));
	return (0);
}
*/
