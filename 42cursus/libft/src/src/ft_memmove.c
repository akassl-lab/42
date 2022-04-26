/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:38 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:14:00 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*oldstr;
	unsigned char	*newstr;

	i = 0;
	oldstr = (unsigned char *) src;
	newstr = (unsigned char *) dest;
	if (src < dest)
	{
		while (n--)
			newstr[n] = oldstr[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (newstr);
}
