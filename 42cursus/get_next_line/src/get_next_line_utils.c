/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 05:56:06 by nmallett          #+#    #+#             */
/*   Updated: 2022/02/16 05:56:06 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	while (size--)
		ptr[size] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i[2];
	char	*ptr1;

	if (!s1)
		return (NULL);
	ptr1 = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!ptr1)
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (s1[i[0]] != '\0')
	{
		ptr1[i[1]] = s1[i[0]];
		i[0]++;
		i[1]++;
	}
	i[0] = 0;
	while (s2[i[0]] != '\0')
	{
		ptr1[i[1]] = s2[i[0]];
		i[0]++;
		i[1]++;
	}
	return (ptr1);
}

int	ft_strlen(const char *str)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *) str;
	while (string[i] && string[i] != '\0')
		i++;
	return (i);
}
