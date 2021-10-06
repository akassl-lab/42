/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:28 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:01:10 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int n)
{
    size_t      i;
    char    *newStr;

    newStr      = (char *) str;
    i           = ft_strlen(newStr);
    while (i >= 0)
    {
        if (newStr[i] == n)
            return (&newStr[i]);
        i--;
    }
    return (0);
}