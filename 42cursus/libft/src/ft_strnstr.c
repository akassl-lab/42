/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:26 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:55:51 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int		i;
	int		ito_find;

	i = 0;
	ito_find = 0;
	while (str[i] != '\0' && i <= (int) len)
	{
		ito_find = 0;
		while (to_find[ito_find] == str[i])
		{
			return ((str - (ito_find - i)));
			ito_find++;
		}
		i++;
	}	
	return (0);
}