/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:09:05 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/05 15:55:03 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(int size, char **strs, char *sep, char *copy)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	y = 0;
	while(i < size)
	{
		j = 0;
		while (strs[i][j]);
		{
			copy[y] = strs[i][j];
			j++;
			y++;
		}
		j = 0;
		while ((i < size - 1) && sep[j])
		{
			copy[y] = sep[j];
			j++;
			y++;
		}
		i++;
	}
	copy[y] = '\0';
	return (copy);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*join;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
	{
		join = malloc(sizeof(char));
		*join = 0;
		return (join);
	}
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	join = malloc(sizeof(char) * len + 1);
	if (!join)
		return (NULL);
	join = ft_strcpy(size, strs, sep, join);
	return (join);
}

int	main(void)
{
	int	size;
	char	*join;
	char	*strs[] = {"WELCOME", "TO", "MY", "WORLD"};
	char	*sep = {", "};

	size = 4;
	join = ft_strjoin(size, strs, sep);
	#include <stdio.h>
	printf("%s", join);
	return (0);
}
