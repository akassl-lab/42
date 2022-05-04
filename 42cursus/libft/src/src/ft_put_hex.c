/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:00:50 by nmallett          #+#    #+#             */
/*   Updated: 2022/05/04 14:31:38 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_put_hex(unsigned long long hex, const int type)
{
	int	i;

	i = 0;
	if (hex >= 16)
	{
		i += ft_put_hex(hex / 16, type);
		i += ft_put_hex(hex % 16, type);
	}
	else
	{
		if (hex <= 9)
			i += ft_putchar((hex + 48));
		else
			if (type == 1)
				i += ft_putchar((hex - 10 + 97));
		else if (type == 2)
				i += ft_putchar((hex - 10 + 65));
	}
	return (i);
}
