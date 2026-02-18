/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:35:20 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/16 16:20:04 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display_file(char *filepath)
{
	int		size;
	int		fd;
	char	buffer[1000];

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		ft_putstr("Cannot read file.\n");
	else
	{
		size = read(fd, buffer, 1000);
		buffer[size] = 0;
		ft_putstr(buffer);
	}
	close(fd);
}
