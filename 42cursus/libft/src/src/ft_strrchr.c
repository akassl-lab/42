/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:28 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:15:24 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int n)
{
	unsigned int	i;
	char			*strex;
	char			n2;

	strex = NULL;
	n2 = (char) n;
	i = 0;
	while (str[i])
	{
		if (str[i] == n2)
			strex = (char *)&str[i];
		i++;
	}
	if (n2 == str[i])
		return ((char *)&str[i]);
	return (strex);
}
