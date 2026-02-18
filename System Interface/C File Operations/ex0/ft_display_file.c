/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:26:33 by mreboux           #+#    #+#             */
/*   Updated: 2026/02/17 13:31:09 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display_file(char *filepath)
{
	int		fd;
	char	buffer;

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		ft_putstr("Cannot read file.\n");
	while (read(fd, &buffer, 1) > 0)
		write(1, &buffer, 1);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_display_file(*(++argv));
	return (0);
}
