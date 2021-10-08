/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:28 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/08 12:29:12 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	unsigned int	i;
	char	*strEx;
	char	n2;

	strEx = NULL;
	n2 = (char) n;
	i = 0;
	while (str[i])
	{
		if (str[i] == n2)
			strEx = (char *)&str[i];
		i++;
	}
	if (n2 == str[i])
		return ((char *)&str[i]);
	return (strEx);
}