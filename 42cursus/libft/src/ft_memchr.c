/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:31 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:03:14 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int n, size_t n2)
{
    size_t      i;
    char    *newStr;

    i = 0;
    newStr      = (char *) str;
    while (newStr[i] != '\0' && i <= n2)
    {
        if (newStr[i] == n)
            return (&newStr[i]);
        i++;
    }
    return (0);
}