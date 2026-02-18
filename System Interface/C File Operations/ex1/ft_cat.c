/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:45:05 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/17 16:33:52 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) > 0)
		write(1, &buffer, 1);
}

void	ft_cat(int argc, char **filepath)
{
	int	i;
	int	fd;

	i = 0;
	if (argc < 2)
		ft_filepath(0);
	else
	{
		while (++i < argc)
		{
			fd = open(filepath[i], O_RDONLY);
			if (fd < 0)
			{
				write(2, "ft_cat: ", 8);
				while (*(filepath[i]))
					write(2, (filepath[i])++, 1);
				write(2, ": No such file or directory\n", 29);
			}
			else
				ft_display(fd);
			close(fd);
		}
	}
}

int	main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return (0);
}
