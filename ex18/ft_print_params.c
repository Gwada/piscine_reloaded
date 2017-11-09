/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:23:26 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/06 15:11:12 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	ft_print_params(int par, char **params)
{
	int		i;

	i = 0;
	while (++i < par)
		ft_putstr(params[i]);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argc, argv);
	return (0);
}
