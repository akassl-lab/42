/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:15 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:03:30 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    char        *ptr;
    int         i;
    size_t      totalSize;

    totalSize = count * size;

    if(!(ptr = malloc(totalSize)))
        return (0);
    i = 0;
	while (totalSize--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *) ptr);
}