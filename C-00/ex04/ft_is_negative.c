/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:26:36 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/11 17:29:08 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	array[2];

	array[0] = "N";
	array[1] = "P";
	if (n < 0)
	{
		write(1, &array[0], 1);
	}
	else if (n > 0)
	{
		write(1, &array[1], 1);
	}
}
