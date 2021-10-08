/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:02 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/08 15:52:40 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    int     i;
    char    *ptr;
	
	i = 0;
	if (!(ptr = ft_calloc(ft_strlen(s)+1, sizeof(char))))
		return (NULL);
    while (s[i] != '\0')
    {
        ptr[i] = s[i];
		i++;
    }
	ptr[++i] = '\0';
    return(ptr);
}