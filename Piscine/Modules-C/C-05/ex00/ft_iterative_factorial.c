/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:01:29 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/26 12:03:03 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		i[2];

	if (nb < 0)
		return (0);
	i[0] = 1;
	i[1] = 1;
	while (i[0] <= nb)
	{
		i[1] *= i[0];
		i[0]++;
	}
	return (i[1]);
}
