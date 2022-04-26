/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_addr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:00:26 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:14:09 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_put_addr(void *ptr)
{
	uintptr_t	ptr2;
	int			c;

	c = 0;
	ptr2 = (uintptr_t)ptr;
	c += ft_putstr("0x");
	c += ft_put_hex(ptr2, 1);
	return (c);
}