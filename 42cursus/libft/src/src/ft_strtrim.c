/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:33 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:15:30 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	i[2];
	char	*s1ex;
	char	*s2ex;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	s1ex = (char *) s1;
	s2ex = (char *) s2;
	i[1] = ft_strlen(s1ex);
	while (s1ex[i[0]] && ft_strchr(s2ex, s1ex[i[0]]))
		i[0]++;
	while (s1ex[i[1] - 1] && ft_strchr(s2ex, s1ex[i[1] - 1]) && i[1] > i[0])
		i[1]--;
	ptr = ft_calloc((i[1] - i[0] + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1ex[i[0]], i[1] - i[0] + 1);
	return (ptr);
}
