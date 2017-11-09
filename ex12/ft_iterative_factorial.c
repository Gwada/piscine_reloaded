/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:58:07 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/06 13:12:47 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		factorial;

	if (nb < 0 || nb > 12)
		return (0);
	i = 0;
	factorial = 1;
	while (++i <= nb)
		factorial *= i;
	return (factorial);
}
