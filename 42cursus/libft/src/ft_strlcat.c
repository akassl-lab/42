/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:09 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/11 12:08:19 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i[3];

	i[1] = ft_strlen(dest);
	i[2] = ft_strlen(src);
	i[0] = size;
	if (size < i[1] + 1)
		return (size + i[2]);
	while (*dest != '\0')
	{
		if (i[0] > 0)
			i[0]--;
		dest++;
	}
	while (*src != '\0' && i[0] < i[1] - size - 1 && i[0]-- > 1)
		*dest++ = *src++;
	*dest = '\0';
	return (i[1] + i[2]);
}
