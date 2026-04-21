/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:22:22 by mreboux           #+#    #+#             */
/*   Updated: 2026/04/21 16:33:02 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && ptr1[i] == ptr2[i] && ptr1[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
/*
int	main(void)
{
	char	*str1 = "tzti";
	char	*str2 = "tzto";
	int	n;

	n = 4;
	#include <stdio.h>
	printf("%d", ft_memcmp(str1, str2, n));
	return (0);
}
*/
