/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofombar <sofombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 10:53:31 by sofombar          #+#    #+#             */
/*   Updated: 2026/02/08 14:01:42 by sofombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	main(int argc, char *argv[])
{
	char	*copy;

	if (argc == 2)
	{
		copy = malloc(sizeof(char) * ft_strlen(argv[1]) + 1);
		verif(argc, argv, copy);
		free(copy);
	}
	pas_bon_nb_arg(argc, copy);
}
