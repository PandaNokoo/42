/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:23:55 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/11 13:27:32 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_nb_mots(char *str, char *charset)
{
	int	i;
	int	nb_mot;
	int	dans_mot;

	i = 0;
	nb_mot = 0;
	dans_mot = 0;
	while (str[i])
	{
		if (!ft_is_sep(str[i], charset))
		{
			if (dans_mot == 0)
			{
				nb_mot++;
				dans_mot = 2147483647;
			}
		}
		else
			dans_mot = 0;
		i++;
	}
	return (nb_mot);
}

int	ft_mot_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !ft_is_sep(str[len], charset))
		len++;
	return (len);
}

char	*ft_strcpy(char *str, int len)
{
	char	*mot;
	int		i;

	mot = malloc(sizeof(char) * (len + 1));
	if (!mot)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mot[i] = str[i];
		i++;
	}
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		mots;
	int		i;
	int		len;

	if (!str || !charset)
		return (NULL);
	mots = ft_nb_mots(str, charset);
	split = malloc(sizeof(char *) * (mots + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < mots)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		len = ft_mot_len(str, charset);
		split[i] = ft_strcpy(str, len);
		if (!split[i])
			return (NULL);
		str += len;
		i++;
	}
	split[i] = '\0';
	return (split);
}
/*
int	main(void)
{
	char *str = "test test2 test";
	char *charset = " ";
	char **split;
	int	i;

	i = 0;
	split = ft_split(str, charset);
	//#include <stdio.h>
	//printf("%s", ft_strcpy(str, ft_mot_len(str, charset)));
	//printf("%d", ft_nb_mots(str, charset));
	//printf("%d", ft_mot_len(str, charset));
	//printf("%s", ft_strcpy(str, ft_mot_len(str, charset)));
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
*/
