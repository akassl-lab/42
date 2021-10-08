/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:36 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/08 15:54:58 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const* s, unsigned int start, size_t len)
{
	size_t i[2];
	char* sub;

	i[0] = 0;
	i[1] = 0;
	if (!(sub = ft_calloc(ft_strlen(s)+1, sizeof(char))))
		return (NULL);
	while (s[i[0]])
	{
		if (i[0] >= start && i[1] < len)
		{
			sub[i[1]] = s[i[0]];
			i[1]++;
		}
		i[0]++;
	}
	sub[i[1]+1] = '\0';
	return (sub);
}