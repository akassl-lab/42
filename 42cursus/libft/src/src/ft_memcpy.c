/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:35 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:13:57 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*oldstr;
	unsigned char	*newstr;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	oldstr = (unsigned char *) dest;
	newstr = (unsigned char *) src;
	while (i < n && n > 0)
	{
		oldstr[i] = newstr[i];
		i++;
	}
	return (oldstr);
}
