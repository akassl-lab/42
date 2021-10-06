/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:58 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:55:20 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strchr(const char *str, int n)
{
    size_t      i;
    char    *newStr;

    i = 0;
    newStr      = (char *) str;

    while (newStr[i] != '\0')
    {
        if (newStr[i] == n)
            return (&newStr[i]);
        i++;
    }
    return (0);
}

