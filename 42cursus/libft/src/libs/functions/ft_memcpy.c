/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:35 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:54:55 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    *ft_memcpy(void *dest, const void * src, size_t n)
{
    size_t              i;
    unsigned    char    *oldStr;
    unsigned    char    *newStr;

    i = 0;
    oldStr = (unsigned char *) dest;
    newStr = (unsigned char *) src;

    while (i < n)
    {
        oldStr[i] = newStr[i];
        i++;
    }
    return (oldStr);
}