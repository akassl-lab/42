/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:25:21 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/26 12:28:45 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int		nb2;

	nb2 = nb;
	if (nb == 0 || power == 0)
		return (1);
	if (nb < 0 || power < 0)
		return (0);
	while (--power != 0)
		nb2 = nb2 * nb;
	return (nb2);
}
