/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:26:13 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/11 17:26:15 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a);

void	ft_print(int a)
{
	char	*chiffre;

	chiffre[] = "0123456789";
	write(1, chiffre + a, 1);
}

void	ft_print_numbers(void)
{
	int		i;

	i = 0;
	while (i < 10)
	{
		ft_print(i);
		i++;
	}
}
