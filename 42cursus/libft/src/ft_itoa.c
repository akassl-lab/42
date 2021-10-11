/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:29 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/11 13:51:07 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	int_length(int nbr)
{
	int len;

	len = 0;
	len = (nbr <= 0 ? 1 : 0);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	nbr;
	int				i[2];

	i[0] = (n < 0 ? 1 : 0);
	ptr = NULL;
	i[1] = int_length(n);
	nbr = (n < 0 ? -n : n);
	ptr = (char *) malloc (sizeof (char) * i[1] + 1);
	if (!ptr)
		return (NULL);
	ptr[i[1]--] = '\0';
	while (i[1] >= 0)
	{
		ptr[i[1]] = nbr % 10 + '0';
		nbr /= 10;
		i[1]--;
	}
	if (i[0] == 1)
		ptr[0] = '-';
	return (ptr);
}
