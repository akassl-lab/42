/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:33 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/08 11:57:40 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1Ex;
	const unsigned char	*str2Ex;
	size_t				i;

	i = 0;
	if (str1 == NULL || str2 == NULL)
		return (0);
	str1Ex = (const unsigned char *)str1;
	str2Ex = (const unsigned char *)str2;
	while (i < n)
	{
		if (str1Ex[i] != str2Ex[i])
			return (str1Ex[i] - str2Ex[i]);
		i++;
	}
	return (0);
}