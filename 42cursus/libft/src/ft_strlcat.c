/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:09 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/08 15:31:56 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t      i;
	size_t      stringLength[2];
    char    *destStr;
    char    *srcStr;

    destStr = (char *)  dest;
    srcStr = (char *)  src;
	stringLength[0] = ft_strlen(destStr);
	stringLength[1] = ft_strlen(srcStr);
	i = size;
	while (*destStr)
	{
		destStr++;
		if (i > 0)
			i--;
	}
	while (*srcStr && i > 1)
	{
		*destStr++ = *srcStr++;
		i--;
	}
	*destStr = '\0';
	if (size > stringLength[0])
		return (stringLength[0] + stringLength[1]);
	return (size + stringLength[1]);
}