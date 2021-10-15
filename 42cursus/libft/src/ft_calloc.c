/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:15 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/14 14:47:57 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;
	size_t	totalsize;

	totalsize = count * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (0);
	i = 0;
	while (totalsize--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *) ptr);
}
