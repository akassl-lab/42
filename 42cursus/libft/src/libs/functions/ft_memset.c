/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:40 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:54:59 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void   *ft_memset(void *str, int c, size_t n)
{
    size_t          i;
    unsigned char   *newStr;

    i = 0;
    newStr = (unsigned char *) str;

    if (n <= 0)
        return ("Invalid Size Length");
    
    while (i < n)
        newStr[i++] = (unsigned char) c;

    return (newStr);
}
