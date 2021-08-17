/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:24:58 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/17 17:25:01 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_printchar(nb / 10);
		ft_printchar(nb % 10);
	}
	else
		ft_printchar(nb + '0');
}

void	ft_printchar(char c)
{
	write(1, &c, 1);
}
