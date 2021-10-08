/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:33 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/08 18:37:59 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strtrim(char const* s1, char const* s2)
{
	size_t	i[2];
	char	*s1Ex;
	char	*s2Ex;
	char 	*ptr;

	i[0] = 0;
	i[1] = 0;
	s1Ex = (char *) s1;
	s2Ex = (char *) s2;
	
	if (s1Ex == NULL && s2Ex == NULL)
		return (NULL);
	
	i[1] = ft_strlen(s1Ex);
	while (s1Ex[i[0]] && ft_strchr(s2Ex, s1Ex[i[0]]))
		i[0]++;
	while (s1Ex[i[1] - 1] && ft_strchr(s2Ex, s1Ex[i[1] - 1]) && i[1] > i[0])
		i[1]--;
	if (!(ptr = ft_calloc((i[1] - i[0] + 1), sizeof(char))))
		return (NULL);
	ft_strlcpy(ptr, &s1Ex[i[0]], i[1] - i[0] + 1);
	return (ptr);
}