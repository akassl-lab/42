/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:18 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/11 10:10:19 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;
	char	*ptr;

	i = 0;
	s2 = (char *) s;
	if (s2 == NULL || f == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s2)) + 1);
	if (!ptr)
		return (NULL);
	ft_strcpy(ptr, s2);
	while (ptr[i] != '\0')
	{
		ptr[i] = (*f)(i, ptr[i]);
		i++;
	}
	return (ptr);
}