/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:26:36 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/11 18:30:36 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int		array[2];

	array[0] = 78;
	array[1] = 80;
	if (n < 0)
	{
		write(1, &array[0], 1);
	}
	else if (n >= 0)
	{
		write(1, &array[1], 1);
	}
}
