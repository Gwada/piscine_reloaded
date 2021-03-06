/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:04:20 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/06 16:03:21 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buff;

	if (argc != 2)
	{
		ft_error(argc);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, &buff, 1) > 0))
		write(1, &buff, 1);
	close(fd);
	return (0);
}
