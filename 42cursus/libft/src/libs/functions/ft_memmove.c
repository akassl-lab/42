/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:38 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:54:57 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t              i;
    unsigned    char    *oldStr;
    unsigned    char    *newStr;

    i = 0;
    oldStr = (unsigned char *)  src;
    newStr = (unsigned char *)  dest;

    if (src < dest)
        while (n--)
            newStr[n] = oldStr[n];
    else
        ft_memcpy(dest, src, n);

    return (newStr);
}