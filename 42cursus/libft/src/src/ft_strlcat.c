/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:09 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:15:01 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i[2];

	i[0] = ft_strlen(src);
	i[1] = ft_strlen(dest);
	if (size > i[1])
	{
		dest = dest + i[1];
		ft_strlcpy(dest, src, size - i[1]);
		return (i[0] + i[1]);
	}
	return (i[0] + size);
}
