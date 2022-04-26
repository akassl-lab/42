/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:07 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:14:58 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
