/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:07 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:02:29 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i[2];
    char    *ptr1; // return
    char    *ptr2; // s1
    char    *ptr3; // s2

    ptr2 = (char *) s1;
    ptr3 = (char *) s2;
    ptr1 = (char *) ft_calloc((ft_strlen(ptr2) + ft_strlen(ptr3)), sizeof(char *));

    if(ptr1 == NULL)
        return(0);
    i[0] = 0;
    i[1] = 0;    
    while (ptr2[i[0]] != '\0')
    {
        ptr1[i[1]] = ptr2[i[0]];
        i[0]++;
        i[1]++;
    }
    i[0] = 0;
    while (ptr3[i[0]] != '\0')
    {
        ptr1[i[1]] = ptr3[i[0]];
        i[0]++;
        i[1]++;
    }
    return(ptr1);
}