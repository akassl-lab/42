/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:58 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:14:43 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int n)
{
	char	*str;

	str = (char *)s;
	while (*str != (char) n)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
