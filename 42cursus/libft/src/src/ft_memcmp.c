/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:33 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:13:54 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1ex;
	const unsigned char	*str2ex;
	size_t				i;

	i = 0;
	str1ex = (const unsigned char *)str1;
	str2ex = (const unsigned char *)str2;
	while (i < n)
	{
		if (str1ex[i] != str2ex[i])
			return (str1ex[i] - str2ex[i]);
		i++;
	}
	return (0);
}
