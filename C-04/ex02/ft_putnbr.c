/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:24:58 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/26 11:25:05 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char *str);
void	ft_printchar1(int nb);

void	ft_putnbr(int nb)
{
	if (nb <= -2147483647)
		ft_printchar("-2147483647");
	if (nb >= 10)
	{
		ft_printchar1(nb / 10);
		ft_printchar1(nb % 10);
	}
	else
		ft_printchar1(nb + '0');
}

void	ft_printchar1(int nb)
{
	write(1, &nb, 1);
}

void	ft_printchar(char *str)
{
	char	finalString;

	while (*str && *str != '\0')
	{
		finalString = *str;
		write(1, &finalString, 1);
		str++;
	}
}
