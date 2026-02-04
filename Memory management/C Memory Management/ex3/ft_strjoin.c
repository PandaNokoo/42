/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:09:05 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/04 19:27:55 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*join;

	i = 0;
	join = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return ("");
		free(join);
	}
	while (i < size)
	{
		join[i] = strs[i] + sep;
		i++;
	}
}

int	main(void)
{
	int	size;
	int	*join;
	int	**strs = {"WELCOME", "TO", "MY", "WORLD"}
	int	*sep = {", "}

	size = 4;
}

