/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:36 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:15:33 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i[2];
	char	*ptr;

	i[0] = 0;
	i[1] = 0;
	if (!s)
		return (NULL);
	if ((int)len > ft_strlen(s))
	{
		len = ft_strlen(s);
	}
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[i[0]])
	{
		if (i[0] >= start && i[1] < len)
		{
			ptr[i[1]] = s[i[0]];
			i[1]++;
		}
		i[0]++;
	}
	ptr[i[1]] = '\0';
	return (ptr);
}
