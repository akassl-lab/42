/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:04 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/14 15:04:15 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *) s;
	if (s2 == NULL || f == NULL)
		return ;
	while (s2[i])
	{
		f(i, &s2[i]);
		i++;
	}
}
