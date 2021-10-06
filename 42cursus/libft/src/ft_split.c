/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:55 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:55:17 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int	ft_strchr_extended(int start, char *s, char c)
{
	int		i[2];
	
	i[0] = start;
	i[1] = 0;
	while (s[i[0]] != '\0')
	{
		if (s[i[0]] == c)
			return (i[0]);
		i[0]++;
	}
	return (i[0]);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_return;
	int		i[3];
	int		storeWorkData[2];
	
	i[0] = 0;
	i[1] = 0;
	i[2] = ft_strlen((char *)s);
	storeWorkData[0] = 0;
	storeWorkData[1] = 0;
	ptr_return = ft_calloc(i[2], sizeof(char *));
	
	if (ptr_return == NULL)
		return (NULL);

	while (s[i[0]] != '\0')
	{
		if (s[i[0]] == c || i[0] == i[2]-1)
		{
			storeWorkData[1] = ft_strchr_extended(storeWorkData[0], (char *)s, c);
			ptr_return[i[1]] = ft_substr((char *)s, storeWorkData[0], storeWorkData[1] - storeWorkData[0]);
			storeWorkData[0] = storeWorkData[1] + 1;
			i[1]++;
		}
		i[0]++;
	}
	return ptr_return;
}