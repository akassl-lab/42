/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:02 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:02:35 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(char *s)
{
    int     i;
    char    *ptr;
    
    ptr = (char *) ft_calloc(ft_strlen(s), sizeof(char *));

    i = 0;
    while (s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }
    return(ptr);
}