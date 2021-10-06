/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:11 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:02:19 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    srcLength;
    char    *destStr;
    char    *srcStr;
    destStr = (char *)  dest;
    srcStr = (char *)  src;

    srcLength = ft_strlen(srcStr);

    if (srcLength < size)
        ft_memcpy(destStr, srcStr, srcLength);
    return srcLength;
}