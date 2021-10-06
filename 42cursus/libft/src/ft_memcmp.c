/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:33 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 15:46:32 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t              i;
    unsigned    char    *strOne;
    unsigned    char    *strTwo;

    i                   = 0;
    strOne              = (unsigned char *) str1;
    strTwo              = (unsigned char *) str2;
    while (strOne[i] != '\0' && i <= n)
    {
        if (strOne[i] != strTwo[i])
            return (0);
        i++;
    }
    while (strTwo[i] != '\0' && i <= n)
    {
        if (strTwo[i] != strOne[i])
            return (0);
        i++;
    }
    return (1);
}