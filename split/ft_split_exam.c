/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:18:28 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/12 20:06:01 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return(1);
	return (0);
}

int	count_word(char *str)
{
	int	i;
	int	j;
	int	count;
	
	i = 0;
	j = 1;
	count = 0;
	if (is_sep(str[0]) == 0)
		count++;
	while (str[j])
	{
		if (is_sep(str[i]) == 1 && is_sep(str[j]) == 0)
			count++;
		i++;
		j++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

char	**ft_split(char *str)
{
	int	i = 0;
	int	k = 0;
	int	j = 0;
	int	words = count_word(str);
	char	**split;


	split = malloc(sizeof(char *) * (words + 1));
	while (str[i])
	{
		while (str[i] && is_sep(str[i]) == 1)
			i++;
		j = i;
		while (str[i] && is_sep(str[i]) == 0)
			i++;
		if (i > j)
		{
			split[k] = malloc((i - j) + 1);
			ft_strncpy(split[k], &str[j], (i -j));
			k++;
		}
	}
	split[k] = '\0';
	return (split);
}

int	main(void)
{
	char *str = "test test2 test";
	char **split;
	int	i;

	i = 0;
	split = ft_split(str);
	#include <stdio.h>
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
